#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int sum=1;
vector<long long> a;
vector<long long> b;
a.push_back(1);
int x=2;
sum=1;
int i;
for (i = 1; i <=n; i++)
{
    if(i%2!=0){
sum=sum+x;
if(sum>n){
    break;
}
else{
    b.push_back(x);
}
x=x+1;
sum=sum+x;
if(sum>n){
    break;
}
else{
    b.push_back(x);
}
x=x+1;
    }
    else{
    
        sum=sum+x;
        if(sum>n){
    break;
}
else{
    a.push_back(x);
}
x=x+1;
sum=sum+x;
if(sum>n){
    break;
}
else{
   a.push_back(x); 
}
x=x+1;
    }



}

int y=n-(sum-x);

int ans1=0;
int ans2=0;
for(auto x: a){
   // cout<<"a="<<x<<endl;
    ans1=ans1+x;
}
for(auto x: b){
    // cout<<"b="<<x<<endl;
    ans2=ans2+x;
}

if(i%2!=0){
    ans2=ans2+y;
}
else{
     ans1=ans1+y;
}
cout<<ans1<<" "<<ans2<<endl;





}
return 0;
}