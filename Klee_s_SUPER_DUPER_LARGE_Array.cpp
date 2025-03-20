#include <bits/stdc++.h>
using namespace std;
long long minSwaps(vector<long long>arr, long long n)
{
   
    pair<long long, long long> arrPos[n];
    for (long long i = 0; i < n; i++) {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }

 
    sort(arrPos, arrPos + n);

    vector<bool> vis(n, false);

   
    int ans = 0;

 
    for (int i = 0; i < n; i++) {
 
        if (vis[i] || arrPos[i].second == i)
            continue;

 
        int cycle_size = 0;
        int j = i;
        while (!vis[j]) {
            vis[j] = 1;

          
            j = arrPos[j].second;
            cycle_size++;
        }

        
        if (cycle_size > 0) {
            ans += (cycle_size - 1);
        }
    }

   
    return ans;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> nums(n);
for (int i = 0; i < n; i++)
{
    cin>>nums[i];
}

if(is_sorted(nums.begin(),nums.end())){
    cout<<0<<endl;
}
else{

vector<long long> count(n,0);
for (int i = 0; i < n; i++)
{
      count[i]=__builtin_popcount(nums[i]);
}


// for(auto x:count){
//     cout<<x<<" ";
// }
// cout<<endl;


long long l=0;
long long r=0;
vector<long long> arr;
long long ans=0;
vector<long long> ch;
while(l<n && r<n){

arr.clear();
while(r<n && count[r]==count[l]){
arr.push_back(nums[r]);
    r++;
}

ans=ans+(minSwaps(arr,arr.size()));

sort(arr.begin(),arr.end());
for(auto x:arr){
 //  cout<<x<<" ";
    ch.push_back(x);
}
//cout<<endl;
l=r;

}


if(is_sorted(ch.begin(),ch.end())){
    cout<<ans<<endl;
}
else{
    cout<<-1<<endl;
}


}

}
return 0;
}