#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,k;
cin>>n>>k;
vector<long long> arr;
 long long x=sqrt(n);
for (int i = 1; i<=x; i++)
{
    if(n%i==0){
        
             arr.push_back(i);
        if(i!=n/i){
          arr.push_back(n/i);
        }
          
        
    }
}

sort(arr.begin(),arr.end());

if(arr.size()<k){
    cout<<-1<<endl;
}
else{
    cout<<arr[k-1]<<endl;
}
return 0;
}