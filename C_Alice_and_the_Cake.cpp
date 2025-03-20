#include <bits/stdc++.h>
using namespace std;
int main() {
     ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr(n);
multiset<long long> ml;
long long sum=0;
for (int i = 0; i < n; i++)
{
     cin>>arr[i];
     ml.insert(arr[i]);
     sum=sum+arr[i];
}
if(n==1){
    cout<<"YES"<<endl;
    continue;
}
/*
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;*/
queue<long long> q;
q.push(sum);
long long cut=0;
while(cut<n-1 && !q.empty()){
    auto node=q.front();
    q.pop();
    //cout<<node<<endl;
        if(node>=2){
        long long a=node/2;
        long long b;
        if(node%2!=0){
         b=node/2+1;
        }
        else{
            b=node/2;
        }
      auto it1=ml.find(a);
      if(it1==ml.end()){
        cut++;
        q.push(a);
      }
      else{
        ml.erase(it1);
      }
auto it2=ml.find(b);
if(it2==ml.end()){
    cut++;
        q.push(b);
}
else{
    ml.erase(it2);
}
    }

}
//cout<<t<<endl;
if(!ml.empty()){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}