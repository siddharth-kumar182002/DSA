#include <bits/stdc++.h>
using namespace std;

string f(string s,long long ind){
    long long n=s.size();
    string t="abacaba";
     for (int i = 0; i < ind; i++)
    {
          if(s[i]=='?'){
            s[i]='z';
          }
    }
    
for (int i = ind; i < (ind+7); i++)
{
    s[i]=t[i-ind];
}
for (int i = ind+7; i <n; i++)
    {
          if(s[i]=='?'){
            s[i]='z';
          }
    }
    return s;
}

bool check(string s){
    string t="abacaba";
long long count=0;
long long n=s.size();
for (int i = 0; i <=n-7; i++)
{
    
    long long ch=0;
    for (int j = i; j<(i+7); j++)
    {
        if((s[j]!=t[j-i])){
                  ch=1;
                  break;
        }
    }
    if(ch==0){
        count++;
    }
    
}

if(count>1){
    return false;
}
else{
    return true;
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
//abacaba=>7;
long long count1=0;
long long count2=0;
string t="abacaba";
vector<long long> ind;
for (int i = 0; i <=n-7; i++)
{
    
    long long f=0;
    long long ch=0;
    for (int j = i; j<(i+7); j++)
    {
        if(s[j]=='?'){
            f=1;
        }
        if((s[j]!=t[j-i]) && s[j]!='?'){
                  ch=1;
        }
    }
//  cout<<"i="<<i<<endl;
//  cout<<ch<<endl;
    if(ch==0){
        ind.push_back(i);
        if(f==1){
            count1++;
        }
        else{
            count2++;
        }
    }
    
}

if(count2>1){
    cout<<"NO"<<endl;
}
else if(count2==1){
for(int i=0;i<n;i++){
    if(s[i]=='?'){
        s[i]='z';
    }
}
cout<<"YES"<<endl;
cout<<s<<endl;
}
else{
if(count1>0){
//cout<<"HI"<<endl;

    //abac???cba
    string temp;
    long long ch=0;
    for(auto x:ind){
       // cout<<x<<endl;
         temp=f(s,x);
        //  cout<<temp<<endl;
         if(check(temp)){
            ch=1;
            break;
         }
    }
   
   if(ch==1){
cout<<"YES"<<endl;
cout<<temp<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

}
else{
    cout<<"NO"<<endl;
}
}

}
return 0;
}