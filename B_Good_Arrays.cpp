#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr(n);
long long nones=0;
long long rsum=0;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]==1){
        nones++;
    }
    else{
        rsum+=arr[i]-1;
    }
}
//cout<<rsum<<endl;
if(n==1){
    cout<<"NO"<<endl;
    continue;
}
if(rsum>=nones){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}



}
return 0;
}