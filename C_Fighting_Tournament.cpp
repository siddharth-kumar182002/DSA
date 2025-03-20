#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,q;
cin>>n>>q;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long> maxi(n);
maxi[0]=arr[0];
for (int i = 1; i < n; i++)
{
    maxi[i]=max(maxi[i-1],arr[i]);
}

while(q--){
long long i,k;
cin>>i>>k;

long long x=arr[i-1];

if(k<(i-1)){
    cout<<0<<endl;
}
else{
    if(x!=maxi[i-1]){
        cout<<0<<endl;
    }
    else{
        long long lo=i-1;
        long long hi=n-1;
        while(hi-lo>1){
            long long mid=(hi+lo)/2;
            if(maxi[mid]!=maxi[i-1]){
                hi=mid-1;
            }
            else{
                lo=mid;
            }
        }
        long long last;
        if(maxi[hi]==maxi[i-1]){
            last=hi;
        }
        else{
            last=lo;
        }
        last=last+1;
        cout<<"first"<<i<<endl;
cout<<"last"<<last<<endl;
        //i-1..i....last-1..last;
        long long ans=0;
        if(k>=i-1 && k<=last-1){
            ans=ans+k-(i-1)+1;
        }
        else if(k>=last){
            if(last==n){
                ans=ans+k-(i-1)
            }
        }
 
			cout<<ans<<endl;
    }
}




}

}
return 0;
}