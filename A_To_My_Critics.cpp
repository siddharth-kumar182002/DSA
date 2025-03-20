#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
vector<long long> arr(3);
for (int i = 0; i < 3; i++)
{
    cin>>arr[i];
}
long long f=0;
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
    {
        if(i!=j){
            if(arr[i]+arr[j]>=10){
                f=1;
                break;
            }
        }
    }
    if(f==1){
        break;
    }
}

if(f==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
return 0;
}