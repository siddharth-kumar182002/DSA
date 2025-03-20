#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
long long odd=0;
long long even=0;

for (int i = 0; i <n; i++)
{
    cin>>arr[i];
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}

if(odd%2!=0){
    cout<<"NO"<<endl;
}
else{
cout<<"YES"<<endl;
}



}
return 0;
}