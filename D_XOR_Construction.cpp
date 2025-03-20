#include <iostream>
#include <vector>

using namespace std;

vector<int> constructArray(const vector<long long>& a) {
    int n = a.size() + 1;
    vector<int> b(n, 0);

    for (int i = 1; i < n; i++) {
        b[i] = b[i - 1] ^ a[i - 1];
    }

    return b;
}

int main() {
    long long n;
    cin>>n;
    vector<long long > arr(n-1);
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    
    vector<int> b = constructArray(arr);
    for (int num : b) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
