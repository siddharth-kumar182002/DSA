#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i+=2){
        pq.push(a[i]);pq.push(a[i+1]);
        pq.pop();
    }
    long long sum=0;
    while(!pq.empty()) sum+=pq.top(),pq.pop();
    cout<<sum<<endl;
    
}