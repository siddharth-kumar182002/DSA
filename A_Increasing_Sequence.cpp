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
long long ans=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int i = 0; i < n; i++)
{
    ans++;
    if(arr[i]==ans){
        ans++;
    }
        

}

cout<<ans<<endl;
}
return 0;
}