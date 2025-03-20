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
vector<long long> brr;
for (int i = 0; i < n-1; i++)
{
    brr.push_back(__gcd(arr[i],arr[i+1]));
}
for(auto x:brr){
    cout<<x<<" "; 
}
cout<<endl;
long long count=0;
long long ind=-1;
for (int i = 1; i < brr.size(); i++)
{
     if(brr[i]>=brr[i-1] && brr[i]>brr[i+1]){
        count++;
        ind=i+1;
        i=i+2;
     }
}
cout<<"ind="<<ind<<endl;
if(count>1){
    cout<<"NO"<<endl;
}
else{
    if(ind==-1){
        if(arr[2]>=arr[1]){
        cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        if(ind==(brr.size())){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            long long a=arr[ind-1];
            long long b=arr[ind];
            long long c=arr[ind+1];
            long long d=arr[ind+2];
            long long x=brr[ind-2];
            long long y=brr[ind+2];
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
            if(__gcd(a,b)>=x && __gcd(b,d)>=__gcd(a,b) && __gcd(b,d)<=y){
                cout<<"YES"<<endl;
                continue;
            }
            if(__gcd(c,b)>=x && __gcd(c,d)>=__gcd(c,b) && __gcd(c,d)<=y){
                cout<<"YES"<<endl;
                continue;
            }
            if(__gcd(a,c)>=x && __gcd(c,d)>=__gcd(a,c) && __gcd(c,d)<=y){
                cout<<"YES"<<endl;
                continue;
            }
            cout<<"NO"<<endl;


        }
    }
}
}
return 0;
}