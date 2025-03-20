#include <iostream>

using namespace std;

const int MAX_N = 1e6;
int arr[MAX_N + 1];
int main() {
    for (int i = 1; i <= MAX_N; i++) {
	
			for (int j = i; j <= MAX_N; j += i) {
                 arr[j]++; 
                 }
		
	}

long long t;
	cin >> t;
while(t--) {
		long long x;
		cin >> x;
        cout<<arr[x]<<endl;

	}
}