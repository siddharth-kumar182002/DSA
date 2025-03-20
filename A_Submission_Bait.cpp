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
map<long long,long long>  mp;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mp[arr[i]]++;
    
}
long long f=0;
for(auto it=mp.rbegin(); it!=mp.rend();it++){
            if(((it->second)%2)!=0){
                    cout<<"YES"<<endl;
                    f=1;
                    break;
            }
}
if(f==0){
    cout<<"NO"<<endl;
}

}
return 0;
}