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
vector<long long> brr(m);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < m; i++)
{
    cin>>brr[i];
}

sort(brr.begin(),brr.end());
long long f=0;
long long z=brr[0]-arr[0];
if(z<arr[0]){
    arr[0]=z;
}
for(int i=1;i<n;i++){
    long long b=arr[i]+arr[i-1];
    auto it=lower_bound(brr.begin(),brr.end(),b)-brr.begin();
    if(it==m){
      continue;
    }
    else{
         arr[i]=brr[it]-arr[i];
    }

}

    if(is_sorted(arr.begin(),arr.end())){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    


}
return 0;
}