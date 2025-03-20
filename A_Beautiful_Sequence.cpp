#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n+1);
for (long long i = 1; i <=n; i++)
{
    cin>>arr[i];
}
long long flag=0;
for (long long i = 1; i <=n; i++)
{
    if(i>=arr[i]){
        cout<<"YES"<<endl;
        flag=1;
        break;
    }
}
if(flag!=1){
    cout<<"NO"<<endl;
}

}
return 0;
}