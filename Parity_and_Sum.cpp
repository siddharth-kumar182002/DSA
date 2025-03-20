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
vector<long long> arr;
vector<long long> brr;

for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    if((x%2)==0){
        arr.push_back(x);
    }
    else{
        brr.push_back(x);
    }

}

sort(arr.begin(),arr.end());
sort(brr.begin(),brr.end());
long long p=arr.size();
long long q=brr.size();
if(p==0 || q==0){
    cout<<0<<endl;
    continue;
}
if(arr[p-1]<=brr[q-1]){
    cout<<p<<endl;
}
else{
    long long f=0;
    long long maxi=brr[q-1];
    for (int i = 0; i < p; i++)
    {
        if((maxi)>=arr[i]){
            arr[i]=arr[i]+maxi;
            maxi=arr[i];
            f++;
        }
        else{
            maxi=maxi+arr[i];
            f++;
            arr[i]=arr[i]+maxi;
            maxi=arr[i];
            f++;
        }
    }
cout<<f<<endl;
   
    
}

}
return 0;
}