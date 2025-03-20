#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<string> arr(n+1);
vector<string> ans(n+1);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
string s="";
long long q=m;
while(q--){
    s=s+'o';
}
arr[n]=s;
ans=arr;
for (int i = 0; i < m; i++)
{
    int count=0;
    for (int j = 0; j <=n; j++)
    {
        if(arr[j][i]=='*'){
            count++;
        }
        if(arr[j][i]=='o'){
            arr[j][i]=count+'0';
            count=0;
        }


    }
    
}

for (int i = 0; i < m; i++)
{
    for (int j = n; j>=0;j--)
    {
        if(ans[j][i]=='o'){
            long long x=arr[j][i]-'0';
            while(x>0){
                ans[j-x][i]='*';
                x--;
            }
            j=j-(arr[j][i]-'0');
        }
        else{
            ans[j][i]='.';
        }
       
    }
    
}
for (int i = 0; i <n; i++)
{
    cout<<ans[i]<<endl;
}
cout<<endl;



}
return 0;
}