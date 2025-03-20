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
int blacka=0;
int blackb=0;
int i;
for (i = 1; i <=n; i++)
{
    if(i%2!=0){
sum=sum+x;
if(sum>n){
    break;
}
else{
    if(x%2==0){
        blackb=blackb+((x/2));
    }
    else{
        blackb=blackb+((x/2)+1);
    }
    
    b.push_back(x);

}
x=x+1;
sum=sum+x;
if(sum>n){
    break;
}
else{
    if(x%2==0){
    blackb=blackb+((x/2));
}
else{
    blackb=blackb+((x/2)+1);
}
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
    if(x%2==0){
    blacka=blacka+((x/2));
}
else{
    blacka=blacka+((x/2));
}
    a.push_back(x);
}
x=x+1;
sum=sum+x;
if(sum>n){
    break;
}
else{
    if(x%2==0){
    blacka=blacka+((x/2));
}
else{
    blacka=blacka+((x/2));
}
   a.push_back(x); 
}
x=x+1;
    }



}
//cout<<"blacka="<<blacka<<endl;
//cout<<"blackb="<<blackb<<endl;

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
    blackb=blackb+(y-y/2);
    ans2=ans2+y;
}
else{
    blacka=blacka+y/2;
     ans1=ans1+y;
}

cout<<(ans1-blacka)<<" "<<blacka<<" "<<(ans2-blackb)<<" "<<blackb<<endl;






}
return 0;
}