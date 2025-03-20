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
string s;
cin>>s;

vector<long long> arr(n+1,0);

for (int i = 1; i <=n; i++)
{
    if(s[i-1]=='1'){
          arr[i]=arr[i-1]+1;
    }
    else{
        arr[i]=arr[i-1];
    }
}
long long l=0;

for (int i = 1; i <=n; i++)
{
    if(k==0){
        break;
    }
    if(s[i-1]=='0'){
        if(arr[i]<=k){
            swap(s[i-1],s[l]);
            k=k-arr[i];
            l++;
        }
        else{
            swap(s[i-1],s[i-1-k]);
            k=0;
           
            l=i-k;
          
        }
    }
}


cout<<s<<endl;



}
return 0;
}