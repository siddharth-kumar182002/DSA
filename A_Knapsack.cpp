#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,w;
cin>>n>>w;
vector<long long> arr(n);
vector<pair<long long ,long long> > mp(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mp[i]={arr[i],i+1};
}
long long mini=*min_element(arr.begin(),arr.end());
sort(mp.begin(),mp.end());
long long sum = 0; // sum of items stored in the knapsack
vector<long long> ans;
        for (int i = n-1; i >=0; i--){
            if (mp[i].first > w){
                continue;
            } 
            else if (mp[i].first + sum > w){
                continue;
            }
            else {
                sum += mp[i].first;
                ans.push_back(mp[i].second);
            }
        }
        if (sum >= (w+1)/2){
            cout << ans.size() <<endl;
            sort(ans.begin(),ans.end());
            for (int i = 0; i < ans.size();i++)
                cout << ans[i] << " ";
        }
        else{
            cout <<-1<<" ";
            }
cout<<endl;
}
return 0;
}