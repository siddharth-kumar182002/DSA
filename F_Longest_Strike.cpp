#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
map<long long,long long> mp;
for (int i = 0; i <n; i++)
{
    long long x;
    cin>>x;
    mp[x]++;
}
vector<long long> arr;
for(auto x:mp){
    if(x.second>=k){
arr.push_back(x.first);
    }
}
sort(arr.begin(),arr.end());
//12356
long long j=1;
long long ans1=-1;
long long ans2=-1;
long long count=0;
for (int i = 0; i < arr.size();)
{
    
    while(arr[j]-arr[j-1]==1 && j<arr.size()){
           j++;
    }
    if(j-i>=count){
        ans1=arr[i];
        ans2=arr[j-1];
        count=j-i;
    }
    i=j;
    j++;


}
if(ans1!=-1){
cout<<ans1<<" "<<ans2<<endl;
}
else{
    cout<<-1<<endl;
}

}
return 0;
}