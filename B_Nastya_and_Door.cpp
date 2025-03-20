#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

vector<long long> peaks(n,0);
for (int i = 1; i < n-1; i++)
{
    if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
         peaks[i]=peaks[i-1]+1;
    }
    else{
        peaks[i]=peaks[i-1];
    }
    
}
peaks[n-1]=peaks[n-2];
long long ans=0;
long long l=1;
long long ind=0;

for (int i = 0; i <k; i++)
{
    ans=max(ans,peaks[i]);
}
if((peaks[k-1]-peaks[k-2])==1){
ans--;
}
//cout<<"anout="<<ans<<endl;
for (int i = k; i <n; i++)
{ 
   // cout<<"i="<<i<<endl;
    long long total=peaks[i]-peaks[l-1];
    if((peaks[l]-peaks[l-1])==1){
        total--;
    }
    if((peaks[i]-peaks[i-1])==1){
        total--;
    }
    if(ans<total){
        ans=total;
        ind=l;
        //cout<<"iin="<<i<<endl;
    }
   // cout<<total<<endl;
    l++;
}


cout<<(ans+1)<<" "<<(ind+1)<<endl;

 
}
return 0;
}