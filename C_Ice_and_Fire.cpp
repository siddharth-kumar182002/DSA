#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s;
cin>>s;
vector<long long> nzero(n-1,0),nones(n-1,0);
if(s[0]=='0'){
    nzero[0]=1;
}
else{
    nones[0]=1;
}
for (int i = 1; i < n-1; i++)
{
    nzero[i]=nzero[i-1];
    nones[i]=nones[i-1];
    if(s[i]=='0'){
        nzero[i]+=+1;
    }
    else{
        nones[i]+=1;
    }
}

for (int i = 2; i <=n; i++)
{
    if(s[i-2]=='1'){
           if(nzero[i-2]>0){
            cout<<nones[i-2]+nzero[i-2]-1<<" ";
           }
           else{
            cout<<1<<" ";
           }
    }
    else{
        if(nones[i-2]>0){
        cout<<nones[i-2]+nzero[i-2]-1<<" ";
        }
        else{
            cout<<1<<" ";
        }
    }
}
cout<<endl;


}
return 0;
}