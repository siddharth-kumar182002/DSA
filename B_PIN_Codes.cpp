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
vector<string> arr(n);
vector<long long> count(10,0);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    count[arr[i][0]-'0']++;
}
long long ans=0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if(i==j){
            continue;
        }
        if(arr[i]==arr[j]){
            for(int k=0;k<10;k++){
                if(count[k]==0){
                    count[k]++;
                    arr[j][0]=(char)(k+'0');
                    ans++;
                    break;
                }
            }
        }
    }
    
}

cout<<ans<<endl;
for(auto x:arr){
    cout<<x<<endl;
}
}
return 0;
}