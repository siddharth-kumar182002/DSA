#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
string s,t;
cin>>s>>t;
string ch1=s;
string ch2=t;
sort(ch1.begin(),ch1.end());
sort(ch2.begin(),ch2.end());
if(ch1!=ch2){
    cout<<"NO"<<endl;
    continue;
}
if(s==t){
    cout<<"YES"<<endl;
    continue;
}
if(n>=2*k){
cout<<"YES"<<endl;
}
else if(n<(k+1)){
cout<<"NO"<<endl;

}
else{
    long long temp=2*k-n;
int f=0;
    for (int i = k; i >=(k+1-temp); i--)
    {
        if(s[i-1]!=t[i-1]){
            f=1;
            break;
        }
    }
    if(f==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}
}
return 0;
}