#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    int arr2[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        arr2[arr[i]-1] = i + 1;
    }

    for (int i = 0; i < t; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}