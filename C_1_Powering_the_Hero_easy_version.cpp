#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long arr[n];
priority_queue<long long>pq;
long long ans=0;
for (long long i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]!=0){
        pq.push(arr[i]);
    }
    else{
        if(pq.size()!=0){
        ans=ans+pq.top();
        pq.pop();
        }
        else{
            continue;
        }
    }
}
cout<<ans<<endl;

}
return 0;
}