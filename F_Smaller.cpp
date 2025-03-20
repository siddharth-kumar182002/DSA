#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

int t;
cin>>t;
while(t--){
long long q;
cin>>q;
string s="a";
string t="a";

long long l=1;
long long r=1;
long long ch=0;
while(q--){

long long d,k;
cin>>d>>k;
string temp;
cin>>temp;
if(ch==2){
    cout<<"YES"<<endl;
    continue;
}
long long f=0;
for (int i = 0; i < temp.size(); i++)
{
    if(temp[i]>='b'){
           f=1;
    }
}

if(d==1){
    l=l+k*(temp.size());
    if(f==1){
        ch=1;
        cout<<"NO"<<endl;
    }
    else{
        if(ch==1){
            cout<<"NO"<<endl;
        }
        else{
        
        if(l<r){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
    }
}
else{
r=r+k*(temp.size());
if(f==1){
    ch=2;
    cout<<"YES"<<endl;
}
else{

    if(ch==1){
        cout<<"NO"<<endl;
    }
    else{
        if(l<r){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}

}





}
}
return 0;
}