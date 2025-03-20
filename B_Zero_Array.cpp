#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);
long long sum=0;
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
}

sort(arr.begin(),arr.end());


if(sum%2!=0){
cout<<"NO"<<endl;
}
else{
if((sum-arr[n-1])>=arr[n-1]){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}




}



return 0;
}