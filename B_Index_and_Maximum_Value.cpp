#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr.begin(),arr.end());
long long mini=arr[0];
long long maxi=arr[n-1];
while(m--){
    char s;
    cin>>s;
    long long l,r;
    cin>>l>>r;
    //  long long ind1=lower_bound(arr.begin(),arr.end(),l)-arr.begin();
    //    long long ind2=lower_bound(arr.begin(),arr.end(),r)-arr.begin();
    if(s=='+'){
      if(l<=mini && mini<=r){
     mini=mini+1;
        }
        if(l<=maxi && maxi<=r){
     maxi=maxi+1;
        }
    }
    else{
  if(l<=mini && mini<=r){
     mini=mini-1;
        }
        if(l<=maxi && maxi<=r){
     maxi=maxi-1;
        }
    }
    cout<<maxi<<" ";
}
cout<<endl;




}
return 0;
}