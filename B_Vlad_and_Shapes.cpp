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

vector<string> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long f=0;

for (int i = 0; i <n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(i+1<n && j>0 && arr[i][j]=='1' && arr[i+1][j-1]=='1' && arr[i][j-1]=='0' ){
            f=1;
            break;
        }
         if(i-1>=0 && j>0 && arr[i][j]=='1' && arr[i-1][j-1]=='1' && arr[i][j-1]=='0' ){
            f=1;
            break;
        }
        
    }
    if(f==1){
        break;
    }
}
if(f==1){
    cout<<"TRIANGLE"<<endl;
}
else{
    cout<<"SQUARE"<<endl;
}

}
return 0;
}