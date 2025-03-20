#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;
long long ind=-1;
//cout<<((x>>2)&1)<<endl;
for(int i=0;i<=30;i++){
    if(((x>>i)&1)==0){
           ind=i;
           break;
    }
}
// cout<<ind<<endl;
// cout<<(1<<ind)<<endl;
long long limit=(1<<ind)-1;//yahha tak sab bhar skte hae

vector<long long> ans;
for(int i=0;i<=min(limit,n-1);i++){
ans.push_back(i);
}
if(ans.size()==n){
    long long last=x;
    long long ind2=0;
    long long newn=n-2;
    while(newn>0){
        ind2++;
        newn=newn>>1;
    }
   //  cout<<ind2<<endl;
    last=last>>(ind2);
    last=last<<(ind2);
     //cout<<last<<endl;
     if(last!=0){
    ans.pop_back();
    ans.push_back(last);
     }
}
else{
    long long last=x;
last=last>>(ind+1);
last=last<<(ind+1);
 //cout<<last<<endl;
    ans.push_back(last);
    while(ans.size()!=n){
        ans.push_back(0);
    }
}
for(auto y:ans){
    cout<<y<<" ";
}
    cout<<endl;
}
return 0;
}