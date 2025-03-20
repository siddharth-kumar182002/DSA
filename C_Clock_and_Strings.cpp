#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b,c,d;
cin>>a>>b>>c>>d;

if(a>b){
    swap(a,b);
}

vector<long long> arr;
for(int i=a+1;i<b;i++){
arr.push_back(i);
}
long long x=0;
long long y=0;
for(int i=0;i<arr.size();i++){
    if(arr[i]==c){
        x=1;
    }
    if(arr[i]==d){
        y=1;
    }
}
if(x==c || x==d || y==c || y==d){
    cout<<"YES"<<endl;
    continue;
}
if((x==1 && y==1) ||(x==0 && y==0)){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}


}
return 0;
}