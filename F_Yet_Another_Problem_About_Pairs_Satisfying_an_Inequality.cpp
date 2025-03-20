#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
vector<long long> temp1;
vector<long long > temp2;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]<(i+1)){
          temp1.push_back(i+1);
          temp2.push_back(arr[i]);
    }
}
long long ans=0;
for (int i = 0; i < temp2.size(); i++)
{
    long long x=temp2[i];
    //cout<<"x="<<x<<endl;
    auto it=lower_bound(temp1.begin(),temp1.end(),x)-temp1.begin();
    //cout<<it<<endl;
    if(it==0){
        continue;
    }
    it--;
    ans=ans+(it+1);
}
cout<<ans<<endl;
//2 3 4 6 7 8
//1,2,3,2,1,4
//{1,2},{2,3},{3,4},{2,6},{1,7},{4,8};


}
return 0;
}