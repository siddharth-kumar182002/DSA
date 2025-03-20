#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<vector<long long>> arr(n,vector<long long>(n));
for (int i = 0; i <n; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin>>arr[i][j];
    }
    
}

int x;
if(n%2==0){
    x=(n/2)-1;
}
else{
    x=n/2;
}
int flag=0;
for (int i = 0; i <=x; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(arr[i][j]==arr[n-1-i][n-1-j]){
            continue;
        }
        else{
            if(k==0){
                flag=1;
                cout<<"NO"<<endl;
                break;
            }
            arr[i][j]=arr[n-1-i][n-1-j]
;
            k--;
            //cout<<i<<" "<<j<<endl;

        }
    }
    if(flag==1){
        break;
    }
    
}
//cout<<k<<endl;
//cout<<k<<endl;
if(flag!=1){
    if(k%2==0 || (n%2==1)){
        cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
    }
    
}


}
return 0;
}