#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr(n-1);
for (int i = 0; i < (n-1); i++)
{
    cin>>arr[i];
   // cout<<arr[i]<<" ";
}
//cout<<endl;
vector<long long> nw(n-1);
nw[0]=arr[0];
long long maxi=arr[0];
long long sec=0;
for (int i = 1; i < (n-1); i++)
{
    nw[i]=arr[i]-arr[i-1];
    maxi=max(maxi,nw[i]);
    //cout<<nw[i]<<" ";
}
//cout<<endl;
map<long long,long long>  ch;
//cout<<maxi<<endl;

for(auto x: nw)
{
     if(x>n){
        sec++;
    }
    ch[x]++;
    if(ch[x]>1){
        sec++;
    }
}
/*for(auto x: ch)
{
    cout<<x<<" ";
}
cout<<endl;*/
long long sum=0;
for (int i=1;i<(n+1);i++)
{
    if(ch[i]==0){
        sum=sum+i;
    }
}
if(sec>1){
    cout<<"NO"<<endl;
}
else{
    if(sum==0){
        cout<<"YES"<<endl;

    }
    else{
    if(sum>n){
        if(ch[sum]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        if(ch[sum]>1 || ch[sum]==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
}
//cout<<sum<<endl;
//cout<<sec<<endl;

}
return 0;
}