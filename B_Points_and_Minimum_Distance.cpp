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
vector<long long> arr;
for (int i = 0; i < 2*n; i++)
{
    long long x;
    cin>>x;
    arr.push_back(x);
}
sort(arr.begin(),arr.end());
long long ans=0;
vector<long long> p1;
vector<long long> p2;
for (int i = 0; i < arr.size(); i++)
{
    if(i<n){
        p1.push_back(arr[i]);
    }
    else{
        p2.push_back(arr[i]);
    }
    
}
for (int i = 0; i < p1.size()-1; i++)
{
    ans=ans+p1[i+1]-p1[i];
}
for (int i = 0; i < p2.size()-1; i++)
{
    ans=ans+p2[i+1]-p2[i];
}
cout<<ans<<endl;

for (int i = 0; i <n; i++)
{
    cout<<p1[i]<<" "<<p2[i]<<endl;
}

}
return 0;
}