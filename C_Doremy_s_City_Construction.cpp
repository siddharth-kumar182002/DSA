#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
         cin>>n;
         vector<long long>v(n);
         for ( int i = 0; i <  n; i++)
         {
             cin>>v[i];
         }

         sort(v.begin(),v.end());

         if(v[0]==v[n-1]){
            cout<<n/2<<endl;
         }
         else
         {
             long long  mx=0;
             for ( long long i = 0; i <  n-1; i++)
             {
                 if(v[i]!=v[i+1]){
                    mx=max(mx,(i+1)*(n-i-1));
                 }
             }
             
             cout<<mx<<endl;
         }
}
return 0;
}