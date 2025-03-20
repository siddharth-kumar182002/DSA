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

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

vector<long long> brr(n);
priority_queue<long long> pq;
for (int i = 0; i <n; i++)
{
    cin>>brr[i];
    if(brr[i]==0){
            pq.push(arr[i]);
    }
}

for (int i = 0; i < n; i++)
{
    if(brr[i]==0){
        arr[i]=pq.top();
        pq.pop();
    }
}
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;




}
return 0;
}