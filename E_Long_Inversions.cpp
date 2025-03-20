#include <bits/stdc++.h>
using namespace std;

char invert(char x){
    if(x=='0'){
        return '1';
    }
    else{
        return '0';
    }
}
long long f(long long mid,string s){

long long n=s.size();
long long count2=0;
for (int i = 0; i < n; i++)
{
    if(s[i]=='0'){
        count2++;
    }
}
if(count2==n){
    return true;
}
vector<long long> arr(n+1,0);
long long x=0;
for (int i = 0; i <=(n-mid); i++)
{
 
  if(arr[i]==(-1)){
    x=!x;
  }
    if(s[i]=='0' && x==0){
       arr[i]+=1;
       arr[i+mid]+=(-1);
       x=1;
    }
    if(s[i]=='1' && x==1){
             arr[i]+=1;
       arr[i+mid]+=(-1);
       x=0;
    }
  
    
}
if(arr[0]%2!=0){
    s[0]=invert(s[0]);
}
for (int i = 1; i <=n; i++)
{
    arr[i]=arr[i]+arr[i-1];
    if(i<n){
       if(arr[i]%2!=0){
        s[i]=invert(s[i]);
    }
    }
}

long long count1=0;
for (int i =0; i <mid; i++)
{
    if(s[i]=='0'){
        count1++;
    }
}
long long count=0;
for (int i = mid; i <n; i++)
{
    if(s[i]=='0'){
        count++;
    }
}


if(count1>0){
    return false;
}
else{
    if((count%mid)==0){
        return true;
    }
    else{
        return false;
    }
}
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;

long long l=0;
for (int i = n; i>=1; i--)
{
    if(f(i,s)){
       
        l=i;
        break;
    }
}
cout<<l<<endl;
}
return 0;
}