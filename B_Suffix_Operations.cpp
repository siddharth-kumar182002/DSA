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

vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

long long diff=-1e16;

for (int i = 0; i <n; i++)
{
    long long moves;
    if(i==0){
        moves=abs(arr[i]-arr[i+1]);
    }
    else if(i==n-1){
        moves=abs(arr[i]-arr[i-1]);
    }
    else{
        long long a=abs(arr[i-1]-arr[i+1]);
        long long b=abs(arr[i]-arr[i+1])+abs(arr[i]-arr[i-1]);
        moves=max(0LL,(b-a));
    }

     if(moves>diff){
       
        diff=max(diff,moves);
    }

}
long long sum=0;
for (int i = n-2; i>=0; i--)
{
    sum=sum+abs(arr[i]-arr[i+1]);
}

sum=sum-diff;
cout<<sum<<endl;


}
return 0;
}