#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long x,y,n;
cin>>x>>y>>n;
vector<long long > arr;
long long count=0;
long long hi=y;
long long need=n-1;
while(x<hi){
    if(need==0){
        break;
    }
    count++;
    need--;
     arr.push_back(hi);
    hi=hi-count;
}
if(need>0 || (arr[n-2]-x)<count){
    cout<<-1<<endl;
    continue;
}
cout<<x<<" ";
for(int i=arr.size()-1;i>=0;i--){
    cout<<arr[i]<<" ";
}
cout<<endl;
}
return 0;
}