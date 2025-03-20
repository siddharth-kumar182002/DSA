#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k,q;
cin>>n>>k>>q;
vector<long long> arr;


for (int i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    arr.push_back(temp);
}

long long l=0;
vector<long long> sub;
for (int i = 0; i < n; i++)
{
      if(arr[i]<=q){
        l++;
      }
      else{
        if(l>=k){
          sub.push_back(l);
        }
        l=0;

      }

}
if(l!=0){
    if(l>=k){
    sub.push_back(l);
    }
}

long long ans=0;
for (int i = 0; i < sub.size(); i++)
{
    ans=ans+((sub[i]-k+1)*(sub[i]-k+2))/2;
}

cout<<ans<<endl;

}
return 0;
}