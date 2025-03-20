#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m,k;
cin>>n>>m>>k;
vector<long long> arr(n);
vector<long long> brr(m);
map<long long,long long> mp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    
}
vector<long long> crr(m);
for (int i = 0; i < m; i++)
{
    cin>>brr[i];
    crr[i]=0;
    mp[i]=0;
}



for (int i = 0; i < m; i++)
{
    long long count=0;
    while(i<m && brr[i]==1){
        count++;
        i++;
    }
    long long x=count;
   // cout<<count<<endl;
    while(x>0){
        mp[x]=mp[x]+(count-x+1);
      //  cout<<"x="<<x<<endl;
       // cout<<mp[x]<<endl;
        x--;
    }
}
//cout<<"hihi"<<endl;

//vector<vector<long long>> mat;
long long sum=0;
long long ans=0;
long long counter=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]==1){
       // mat.push_back(brr);
        counter++;
        if(k%counter==0){
           sum=sum+mp[k/counter];
           
        }
        ans=ans+sum;
    }
    else{
       // mat.push_back(crr);
       sum=0;
       counter=0;
    }
}
cout<<ans<<endl;




return 0;
}