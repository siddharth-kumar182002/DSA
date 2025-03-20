#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n,k;
cin>>n>>k;

long long temp=n;
long long i=0;
priority_queue<long long> pq;
while(temp>0){
if(temp&1){
pq.push(i);
}
temp=temp>>1;
i++;

}

if(k<pq.size()){
    cout<<"NO"<<endl;
}
else {

    while(pq.size()!=k){
          long long maxi=pq.top();
          if(maxi==0){
            break;
          }
          pq.pop();
          pq.push(maxi-1);
          pq.push(maxi-1);
    }

    if(pq.size()!=k){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        while(!pq.empty()){
            long long x=pq.top();
            pq.pop();
            cout<<(1<<x)<<" ";
        }
        cout<<endl;
    }
}
return 0;
}