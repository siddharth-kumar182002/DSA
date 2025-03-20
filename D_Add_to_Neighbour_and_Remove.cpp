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
vector<long long>arr(n);
long long sum=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
}
vector<long long> div;
for (int i = 1; i*i<=sum; i++)
{
    if(sum%i==0){
        if(sum/i==i){
            if(i<=n){
            div.push_back(i);
            }
        }
        else{
            if(i<=n){
                div.push_back(i);
            }
           if((sum/i)<=n){
            div.push_back(sum/i);
           }
        }
    }
}

// for(auto x:div){
//     cout<<x<<" ";
// }
// cout<<endl;
sort(div.begin(),div.end());
for (int i = div.size()-1; i >=0; i--)
{
    long long x=sum/div[i];
    long long y=0;
    long long s=0;
    for (int j = 0; j < n; j++)
    {
        s=s+arr[j];
        if(s==x){
            y++;
            s=0;
        }
    }
    if(y==div[i]){
        cout<<n-y<<endl;
        break;
    }
    
}


}
return 0;
}