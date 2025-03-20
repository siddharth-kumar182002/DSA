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
string s;
cin>>s;
vector<long long> arr(n+1,0);
for (int i = 1; i <=n; i++)
{
    if(s[i-1]=='0'){
        arr[i]=arr[i-1]+1;
    }
    else{
        arr[i]=arr[i-1];
    }
}

long long mini=1e9;
long long ans=1e9;
for (long long i = n; i>=0; i--)
{
    if(i==0){
        long long zero=arr[n];
        long long one=n-arr[n];
        // cout<<"i="<<i<<endl;
        // cout<<zero<<endl;
        // cout<<one<<endl;
        if((one)>=((n+1)/2)){
            if(mini>=abs(((n+1)/2)-i)){
                    mini=min(mini,abs(((n+1)/2)-i));
                    ans=min(ans,i);
            }
        }
        //cout<<ans<<endl;
    }
    else{
                long long zeroleft=arr[i];
        long long oneleft=i-arr[i];
        long long zerorit=arr[n]-arr[i];
        long long onerit=(n-i)-zerorit;
        
        if((zeroleft)>=((i+1)/2) &&  ((onerit)>=((n-i+1)/2))){
            if(mini>=abs(((n+1)/2)-i)){
                    mini=min(mini,abs(((n+1)/2)-i));
                    if(mini==0 && n%2!=0){
                         mini=1;
                    }
                   ans=min(ans,i);
            }
        }

        // cout<<"i="<<i<<endl;
        // cout<<zeroleft<<" "<<oneleft<<endl;
        // cout<<zerorit<<" "<<onerit<<endl;
        // cout<<"mini"<<mini<<endl;
        //  cout<<ans<<endl;
    }
}

cout<<ans<<endl;


}
return 0;
}