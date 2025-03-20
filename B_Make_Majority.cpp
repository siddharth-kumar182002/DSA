#include <bits/stdc++.h>
using namespace std;
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
string x="";
long long zero=0;
long long one=0;
for (int i = 0; i <n; i++)
{
    if(s[i]=='1'){
        x+='1';
        one++;
    }
    else{
        x+='0';
        zero++;
        while(s[i]=='0'){
            i++;
        }
        i--;
    }
}
//cout<<x<<endl;

if(one>zero){
    cout<<"Yes"<<endl;
}
else{
    long long sz=x.size();
    long long pos1=-1;
    for (int i = 0; i <sz; i++)
    {
        if(x[i]=='1' && i==0){
                pos1=i;
                break;
        }
        if(i>0 && x[i]=='1' && x[i-1]=='1'){
                pos1=i;
                break;
        }
    }
     long long pos2=-1;
    for (int i =sz-1; i>=0; i--)
    {
        if(x[i]=='1' && i==(sz-1)){
                pos2=i;
                break;
        }
        if(i<(sz-1) && x[i]=='1' && x[i+1]=='1'){
                pos2=i;
                break;
        }
    }
       //cout<<pos1<<endl;
       //cout<<pos2<<endl;
    if(pos1<pos2 && pos1!=-1 && pos2!=-1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    
}

}
return 0;
}