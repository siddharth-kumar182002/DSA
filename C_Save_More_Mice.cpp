#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int> v;
for (int i = 0; i < k; i++)
{
    int temp;
    cin>>temp;
    v.push_back(temp);
}

sort(v.begin(),v.end());
int ans=0;
int cat=0;
for (int i = k-1; i >= 0; i--)
{
    if((v[i]-cat)>=1){
        ans++;
        cat=cat+(n-v[i]);
    }
}

cout<<ans<<endl;


}
return 0;
}
