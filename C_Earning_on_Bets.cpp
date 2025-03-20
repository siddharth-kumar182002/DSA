#include <bits/stdc++.h>
using namespace std;
long long gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 

long long findlcm(vector<long long> &arr, int n)
{

    long long ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}
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
long long f=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];

}
long long x=findlcm(arr,n);
//cout<<x<<endl;
vector<long long> ans;
long long sum=0;
long long mini=1e10;
for (int i = 0; i < n; i++)
{
    ans.push_back((x/arr[i]));
    sum=sum+((x/arr[i]));
}
//cout<<sum<<endl;
//cout<<mini<<endl;
if(sum>=x){
    cout<<-1<<endl;
}
else{
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}

}
return 0;
}