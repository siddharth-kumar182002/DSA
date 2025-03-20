#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long> v(n);
for (int i = 0; i < n; i++)
{
    cin>>v[i];
}
sort(v.begin(),v.end());
while(m--){
  long long a,b,c;
    cin>>a>>b>>c;
    if(c>=0){
   auto it= lower_bound(v.begin(),v.end(),b)-v.begin();
    
    
        if( it<n && (v[it]-b)*(v[it]-b)<4*a*c){
        cout<<"YES"<<endl;
        cout<<v[it]<<endl;
        continue;
        }
            
    if( it>0 && (v[it-1]-b)*(v[it-1]-b)<4*a*c){
    cout<<"YES"<<endl;
    cout<<v[it-1]<<endl;
    continue;
    }

    cout<<"NO"<<endl;


    }
    else{
         cout<<"NO"<<endl;
    }
}
cout<<endl;




}
return 0;
}