#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n,k;
cin>>n>>k;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long> ms(n+1,0);
set<long long> ct;
for (int i = 0; i <=n; i++)
{
    ct.insert(i);
}
long long ans=INTMAX_MAX;
for (int i = 0; i <k; i++)
{
    ms[(arr[i])]++;
     if(ct.count(arr[i])){
ct.erase(arr[i]);
}
}
//cout<<"hihi"<<endl;
for (int i = k; i < n; i++)
{
ans=min(ans,*(ct.begin()));

ms[arr[i]]++;
if(ct.count(arr[i])){
ct.erase(arr[i]);
}
ms[arr[i-k]]--;
if(ms[arr[i-k]]==0){
ct.insert(arr[i-k]);
}


}
ans=min(ans,*(ct.begin()));
cout<<ans<<endl;

return 0;
}