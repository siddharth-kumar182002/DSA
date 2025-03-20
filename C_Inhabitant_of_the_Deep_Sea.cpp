#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);
long long y=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    y=y+arr[i];
}

long long l=n;
long long r=-1;


long long x=k/2;
if(k%2!=0){
x++;
}

long long sum=0;
for (int i = 0; i < n; i++)
{
    sum=sum+arr[i];
    if(sum>x){
        l=i;
        break;
    }
}




x=k/2;

sum=0;
for (int i = n-1; i >=0 ; i--)
{
    sum=sum+arr[i];
    if(sum>x){
        r=i;
        break;
    }
}
//cout<<"l="<<l<<" "<<"R="<<r<<endl;
if(l>r){
    cout<<n<<endl;
}
else if(l==r){
if(y>k){
    cout<<n-1<<endl;
}
else{
    cout<<n<<endl;
}
}
else{
cout<<(n-(r-l+1))<<endl;
}


}
return 0;
}