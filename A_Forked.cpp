#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
long long kx,ky;
cin>>kx>>ky;
long long qx,qy;
cin>>qx>>qy;

vector<pair<long long,long long>> arr1={{kx-b,ky+a},{kx-b,ky-a},{kx+b,ky+a},{kx+b,ky-a},{kx-a,ky+b},{kx+a,ky+b},{kx-a,ky-b},{kx+a,ky-b}};
set<pair<long long,long long>> s1;
for (int i = 0; i <8; i++)
{
   // cout<<arr1[i].first<<" "<<arr1[i].second<<endl;
   s1.insert(arr1[i]);
   //s.insert(arr2[i]);
}
kx=qx;
ky=qy;

vector<pair<long long,long long>> arr2={{kx-b,ky+a},{kx-b,ky-a},{kx+b,ky+a},{kx+b,ky-a},{kx-a,ky+b},{kx+a,ky+b},{kx-a,ky-b},{kx+a,ky-b}};
set<pair<long long,long long>> s2;
for (int i = 0; i <8; i++)
{
    //cout<<arr1[i].first<<" "<<arr1[i].second<<endl;
   //s.insert(arr1[i]);
   s2.insert(arr2[i]);
}

long long n=s1.size()+s2.size();
set<pair<long long,long long>> s;

for(auto x:s1){
    s.insert(x);
}
for(auto x:s2){
    s.insert(x);
}


cout<<n-s.size()<<endl;

}
return 0;
}