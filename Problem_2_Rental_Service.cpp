#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,m,r;
cin>>n>>m>>r;

vector<long long > arr1(n);
for (int i = 0; i < n; i++)
{
    cin>>arr1[i];
}
sort(arr1.begin(),arr1.end());
for( auto x : arr1){
    cout<<x<<" ";
}
cout<<endl;
vector<pair<long long,long long>> arr2(m);

for (int i = 0; i < m; i++)
{
    long long temp1,temp2;
    cin>>temp1>>temp2;

    arr2[i].first=temp2;
    arr2[i].second=temp1;

}
sort(arr2.begin(),arr2.end());
for( auto x : arr2){
    cout<<x.first<<" "<<x.second<<" ";
}
cout<<endl;

vector<long long > ans(n);
for (int i = n-1; i >=0 ; i--)
{
    
}



return 0;
}