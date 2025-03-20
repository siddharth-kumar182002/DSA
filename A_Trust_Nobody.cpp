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
vector<long long> mp(n+1); 
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mp[arr[i]]++;
}

for (int i = 1; i <=n; i++)
{
    mp[i]=mp[i-1]+mp[i];
}

//3 3 5 5 6 6  
int f=0;
for(int i=0;i<=n;i++){
    long long x=mp[i];
    if(n-x==(i)){
        cout<<i<<endl;
        f=1;
        break;
    }
    
}
if(f==0){
    cout<<-1<<endl;
}


}
return 0;
}