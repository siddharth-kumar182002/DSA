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
long long sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum=sum+arr[i];
}
cout<<(sum-(n-1))<<endl;
//sort(arr.begin(),arr.end());


}
return 0;
}