#include <bits/stdc++.h>
using namespace std;

long long bs(long long currMax, vector<long long>& arr){
    
    long long l = -1;
    long long r = arr.size() - 2;
    
    while(l+1<r){
        long long mid = (l+r)/2;
        if(arr[mid]+arr[mid+1] > currMax){
            r = mid;
        }
        else{
            l = mid;
        }
    }
 
    return l;
}

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
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
sort(arr.begin(),arr.end());



map<long long,long long> cnt;
 
    long long ans = n-1;    
 
    for(long long i=n-1;i>=0;i--){
        long long currMax = arr[i];
        long long x=bs(currMax, arr);
        long long checkAns = (x+1) + ((n-1-i) - cnt[currMax]);
        ans = min(ans, checkAns);
 
        cnt[currMax]++;
    }
 
 
    cout<<ans<<endl;


}
return 0;
}