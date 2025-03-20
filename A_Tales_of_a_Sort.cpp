#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
long long maxi=0;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    //maxi=max(maxi,arr[i]);
}



for (auto  it = arr.begin(); it!=arr.end(); it++)
{
   // maxi=max(maxi,*it);
    if(is_sorted(it,arr.end())){
        cout<<maxi<<endl;
        break;
    }
     maxi=max(maxi,*it);
    
}




}
return 0;
}