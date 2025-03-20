#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll array[n];
for (int i = 0; i < n; i++)
{
    cin>>array[i];
}
ll a = count(array,array+n-1,0);
ll sum=0;
ll c=0;
for (int i = 0; i < n-1; i++)
{
    sum=sum+array[i];
}
for (int i = 0; i < n-1; i++)
{
    if(array[i]==0){
        c=c+1;


    }
    else{
        break;
    }

}


cout<<a+sum-c<<endl;



}
return 0;
}