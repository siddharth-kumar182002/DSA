#include <bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
long long power(long long x, long long n)
{
    int result = 1;
    while (n > 0) {
        if (n & 1 == 1) // y is odd
        {
            result = (result%mod * x%mod)%mod;
        }
        x = (x%mod * x%mod)%mod;
        n = n >> 1; // y=y/2;
    }
    return result;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long t;
cin>>t;
// int C[50][50];
//  for(int n = 0; n < 50; n++) { // loop over n from 0 to N-1 (inclusive)
//         C[n][0] = 1;
//         C[n][n] = 1;
//         for (int k = 1; k < n; k++) // loop over k from 1 to n-1 (inclusive)
//             C[n][k] = C[n][k - 1] + C[n - 1][k - 1];
//     }

//     for (int i = 0; i < 50; i++)
//     {
//         for (int j = 0; j <50; j++)
//         {
//             cout<<C[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }
//     cout<<endl;

    vector<long long> num(t);
    vector<long long> kum(t);
    for (int i = 0; i < t; i++)
    {
        cin>>num[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin>>kum[i];
    }

for (int i = 0; i < t; i++)
{
    cout<<power(2,kum[i])<<endl;
}



    
    
return 0;
}