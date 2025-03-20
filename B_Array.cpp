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

long long l=0;
long long r=0;
map<long long ,long long> mp;

while(r<n){
    mp[arr[r]]++;
    if(mp.size()==k){
        break;
    }
    r++;
}

if(r==n){
    cout<<-1<<" "<<-1<<endl;
    return 0;
}

while(mp.size()==k){
mp[arr[l]]--;
if(mp[arr[l]]==0){
    mp.erase(arr[l]);
    break;
}
l++;
}

cout<<(l+1)<<" "<<(r+1)<<endl;

return 0;
}