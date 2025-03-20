#include <bits/stdc++.h>
using namespace std;
int main() {
int n,m;
cin>>n>>m; 
map<long,long> v;
vector<long long>a;
vector<long long> k;

for (long long i = 0; i < n; i++)
{
    
    long long temp;
    cin>>temp;
    a.push_back(temp);
    // v.push_back({temp,)
}
for (long long i = 0; i < n-1; i++)
{
    a[i+1]=a[i+1]+a[i];
}
for (int i = 0; i < n; i++)
{
    v[a[i]]=i+1;
}



for (long long i = 0; i <m; i++)
{
    long long temp1;
    cin>>temp1;
    k.push_back(temp1);
}

for (long long i = 0; i < m; i++)
{
    if(k[i]<=a[0]){
        cout<<1<<" "<<k[i]<<endl;
    }
    else{
     auto it=lower_bound(a.begin(),a.end(),k[i]);
cout<<v[*it]<<" "<<k[i]-a[v[*it]-2]<<endl;
    }
    
}




return 0;
}