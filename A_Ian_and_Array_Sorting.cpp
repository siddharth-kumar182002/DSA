#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int cnt=0;
for (int i = 1; i < n; i++)
{
    if(arr[i]<arr[i-1]){
        cnt++;
    }
}

if(cnt>1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

}
return 0;
}