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
long long mini=1e9;
long long ind=-1;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    mini=min(mini,arr[i]);
}

for (int i = 0; i < n; i++)
{
    if(arr[i]==mini){
        ind=i;
        break;
    }
}

int f=0;
for (int i = ind; i <n-1 ; i++)
{
    if(arr[i]>arr[i+1]){
        f=1;
        break;
    }
}
if(f==1){
    cout<<-1<<endl;
    continue;
}
else{
cout<<ind<<endl;
}





}
return 0;
}