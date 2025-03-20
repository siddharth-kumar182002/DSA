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
long long odd=0;
long long even=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        even++;
    }
    else{
        odd++;
    }
}

if(even>0){
    cout<<(odd+1)<<endl;
}
else{
    cout<<(odd-1)<<endl;
}

}
return 0;
}