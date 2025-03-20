#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
map<int,int> m1,m2;
vector<int> arr1(n);
vector<int> arr2(n);
int count=1;
for(auto &x:arr1){
    cin>>x;
}
for(auto &x:arr2){
    cin>>x;
}

for (int i = 0; i < n-1; i++)
{
    if(arr1[i]!=arr1[i+1]){
m1[arr1[i]]=max(count,m1[arr1[i]]);
            count=1;
}
else{
    count++;
}
}
m1[arr1[n-1]]=max(count,m1[arr1[n-1]]);
 count=1;
for (int i = 0; i < n-1; i++)
{
    if(arr2[i]!=arr2[i+1]){
m2[arr2[i]]=max(count,m2[arr2[i]]);
            count=1;
}
else{
    count++;
}
}
m2[arr2[n-1]]=max(count,m2[arr2[n-1]]);
int maxi=-1;
for(auto &x:m1){
int a=x.first;
int b=x.second;
//cout<<b<<" "<<m1[a]<<endl;
maxi=max(maxi,m2[a]+b);

}
for(auto &x:m2){
int a=x.first;
int b=x.second;
//cout<<b<<" "<<m1[a]<<endl;
maxi=max(maxi,m1[a]+b);

}
cout<<maxi<<endl;

}
return 0;
}