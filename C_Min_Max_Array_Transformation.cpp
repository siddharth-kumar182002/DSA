#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> a(n),b(n);
multiset<long long> ml;

for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    cin>>b[i];
}
long long ind1=n-1;
vector<long long> mini(n),maxi(n);


for (int i = n-1; i >=0 ; i--)
{
    while(ind1>=0 && b[ind1]>=a[i]){
        ml.insert(b[ind1]);
        ind1--;
    }
    //cout<<"i="<<i<<endl;
    //cout<<ml.size()<<endl;
    mini[i]=*ml.begin()-a[i];
    auto it=ml.end();
    it--;
    // cout<<*it<<endl;
    maxi[i]=*(it)-a[i];


    long long cnt1=n-i;
    long long cnt2=n-1-ind1;
if(cnt1==cnt2){
    ml.clear();
}

}

for(auto x:mini){
    cout<<x<<" ";
}
cout<<endl;
for(auto x:maxi){
    cout<<x<<" ";
}
cout<<endl;
}

return 0;
}