#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{  
    ll t;
    cin>>t;
    while(t--) {
        ll n,b,sum=0,maxi = INT_MIN,par=0;
        cin>>n;
        sum = 0;
        par = -1;
        maxi = INT_MIN;
        for( ll i = 0 ; i < n ; i++) {
            cin>>b;
            if(abs(b)%2 != par) {
                sum+=b;
            }
            else {
                sum = b;
            }
            par = abs(b)%2;
            maxi = max(sum,maxi);
            if(sum<0){
                sum=0;
            }
        }
        cout<<maxi<<endl;
    }
    return 0;     
 }