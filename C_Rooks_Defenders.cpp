#include <bits/stdc++.h>
using namespace std;
int main() {
       ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(__null);
long long n,q;
cin>>n>>q;
set<long long > freerow,freecol;
vector<long long> arr(n+1);
vector<long long> arr1(n+1);
for (int i = 1; i <=n; i++)
{
    freerow.insert(i);
    freecol.insert(i);
}

while(q--){
long long t;
cin>>t;
if(t==1){
long long x,y;
cin>>x>>y;
arr[x]++;
arr1[y]++;
freerow.erase(x);
freecol.erase(y);
}
else if(t==2){
long long x,y;
cin>>x>>y;
arr[x]--;
arr1[y]--;
if(arr[x]==0){
    freerow.insert(x);
}
if(arr1[y]==0){
    freecol.insert(y);
}
}
else{
long long x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
auto it1=freerow.lower_bound(x1);
auto it2=freecol.lower_bound(y1);

if(it1==freerow.end() || *it1>x2){
    cout<<"Yes"<<endl;
    continue;
}
if(it2==freecol.end() || *it2>y2){
    cout<<"Yes"<<endl;
    continue;
}
cout<<"No"<<endl;

}
}
return 0;
}