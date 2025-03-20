#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,x,y;
cin>>n>>x>>y;
vector<long long> arr(n+1,-1);
long long c=0;
for (int i = y-1; i >=0; i--)
{
    if(c==0){
        arr[i]=-1;
        c=1;
    }
    else{
        arr[i]=1;
        c=0;
    }
}

for (int i = y; i <=x; i++)
{
    arr[i]=1;
}

 c=0;
for (int i = x+1 ; i<=n; i++)
{
    if(c==0){
        arr[i]=-1;
        c=1;
    }
    else{
        arr[i]=1;
        c=0;
    }
}

for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

}
return 0;
}