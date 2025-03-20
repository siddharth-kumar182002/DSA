#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a1,a2,b1,b2;
cin>>a1>>a2>>b1>>b2;
long long ans=0;
long long count=0;
long long draw=0;
if(a1>b1){
    count++;
}
else if(a1==b1){
    draw++;
}
if(a2>b2){
    count++;
}
else if(a2==b2){
    draw++;
}


if(count==2 || (draw==1 and count==1)){
    ans++;
}
count=0;
draw=0;
if(a2>b1){
    count++;
}
else if(a2==b1){
    draw++;
}
if(a1>b2){
    count++;
}
else if(a1==b2){
    draw++;
}

if(count==2 || (draw==1 and count==1)){
    ans++;
}
count=0;
draw=0;
if(a1>b2){
    count++;
}
else if(a1==b2){
    draw++;
}
if(a2>b1){
    count++;
}
else if(a2==b1){
    draw++;
}


if(count==2 || (draw==1 and count==1)){
    ans++;
}
count=0;
draw=0;
if(a2>b2){
    count++;
}
else if(a2==b2){
    draw++;
}
if(a1>b1){
    count++;
}
else if(a1==b1){
    draw++;
}


if(count==2 || (draw==1 and count==1)){
    ans++;
}
count=0;
draw=0;
cout<<ans<<endl;





}
return 0;
}