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
long long sum=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
}

long long x=sqrt(sum);
if(x*x==sum){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


}
return 0;
}