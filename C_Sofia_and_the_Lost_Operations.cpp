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
vector<long long> brr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
map<long long ,long long> crr;


for (int i = 0; i < n; i++)
{
  cin>>brr[i];
  if(arr[i]!=brr[i]){
    crr[(brr[i])]++;
  }
}


long long m;
cin>>m;
map<long long,long long> mrr;
long long y;
for (int i = 0; i < m; i++)
{
    long long temp;
    cin>>temp;
    mrr[temp]++;
    if(i==(m-1)){
        y=temp;
    }
}
/*for(auto x:mrr){
    cout<<x<<" ";
}
cout<<endl;*/

//cout<<"HI"<<endl;
sort(brr.begin(),brr.end());

long long it=lower_bound(brr.begin(),brr.end(),y)-brr.begin();
if(brr[it]!=y){
    cout<<"NO"<<endl;
}
else{
    //sort(mrr.begin(),mrr.end());
    long long f=0;
    for (auto x:crr)
    {
        
           if(mrr[x.first]<x.second){
            f=1;
            break;
           }

    }
    if(f==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    
}




}
return 0;
}