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

sort(arr.begin(),arr.end());

if(arr[0]!=arr[1]){
    cout<<arr[0]<<endl;
}
else{
    cout<<arr[2]<<endl;
}

}
return 0;
}