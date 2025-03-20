#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
string b1;
string b2;
cin>>b1>>b2;

reverse(b2.begin(),b2.end());
string ans=b1+b2;
int flag=0;
for (int i = 0; i < (n+m-1); i++)
{
    if(ans[i]==ans[i+1]){
        for (int j = i+1; j < (n+m-1); j++)
        {
            if(ans[j]==ans[j+1]){
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
        }
        
    }

    if(flag==1){
        break;
    }
}
if(flag!=1){
    cout<<"YES"<<endl;
}

}
return 0;
}