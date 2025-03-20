#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n,k;
string s;
cin>>s;

vector<long long> arr1(k);
vector<long long> arr2(k);
for (int i = 0; i <k; i++)
{
    cin>>arr1[k];
}
for (int i = 0; i <k; i++)
{
    cin>>arr2[k];
}

long long q;
cin>>q;
vector<long long> crr;
map<long long,long long> mp;
while(q--){
    long long x;
    cin>>x;
     auto it= lower_bound(arr1.begin(),arr1.end(),x)-arr1.begin();
     long long l=arr1[it];
     long long r=arr2[it];
    long long a=min(x,r+l-x);
    long long b=max(x,r+l-x);
    auto it1=lower_bound(crr.begin(),crr.end(),a);
    auto it2=lower_bound(crr.begin(),crr.end(),b);
    if(it1==crr.end() && it2==crr.end()){
        crr.push_back(b);
           mp[b]=a;
    }
    else{
        if(it1!=crr.end()){
            long long ind=it1-crr.end();
            mp[ind]=max(a,mp[ind]);
        }
    }

}



}
return 0;
}