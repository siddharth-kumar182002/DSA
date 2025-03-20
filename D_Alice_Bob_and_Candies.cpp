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
vector<long long > arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

long long l=0;
long long r=n-1;
long long alice=0;
long long bob=0;
long long f=0;
long long prv=0;
long long count=0;
while(l<=r){
count++;
if(f==0){
    //alice
    long long s=0;
while(s<=prv && l<=r){
    s=s+arr[l];
    l++;
}
alice+=s;
prv=s;
f=1;
}
else{
long long s=0;
while(s<=prv && l<=r){
    s=s+arr[r];
    r--;
}
bob+=s;
prv=s;
f=0;
}
}

cout<<count<<" "<<alice<<" "<<bob<<endl;
}
return 0;
}