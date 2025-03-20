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
vector<long long> arr(n+1);
vector<long long> brr(n+2,0);
long long f=0;
for (int i = 1; i <=n; i++)
{
    cin>>arr[i];
    if(i==1){
    brr[arr[i]]=1;
    continue;
    }
    else{
        if(brr[arr[i]-1]==0 && brr[arr[i]+1]==0){
                  f=1;
        }
        else{
            brr[arr[i]]=1;
        }
    }

}
if(f==1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}