#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long pos;
cin>>pos;

//n...n-1....n-2...
//cab
//ab
//a

long long count=0;
long long sz=s.size();
long long p1=pos; 
long long sm=0;
while(pos>0){
    if(pos-sz>0){
        sm=sm+sz;
            }
    pos=pos-(sz);
    sz--;
    count++;
}
p1-=sm;
count--;
long long ind=0;
string temp="";
long long j=0;

while(count>0){

    while(j<s.size()){
if(temp.size()==0){
    temp+=s[j];
    j++;
}
else{
if(*temp.rbegin()<=s[j]){
    temp+=s[j];
    j++;
}
else{
    break;
}
}
    }
temp.pop_back();
count--;
}

while(j<s.size()){
    temp+=s[j];
    j++;
}
cout<<temp[p1-1];//abcd
//

}
return 0;
}