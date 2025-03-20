#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long> arr(n);
vector<long long> prr(m);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < m; i++)
{
    cin>>prr[i];
}

//3 6 7 9 10
//2 3 5 9 9
//6+8+
sort(arr.begin(),arr.end());
sort(prr.begin(),prr.end());
long long ans=0;
long long l=0;
long long r=m-1;
long long i=0;
long long j=n-1;
//cout<<"l="<<l<<" "<<"r="<<r<<endl;
while(i<=j){
    if(abs(arr[i]-prr[r])>abs(arr[i]-prr[l])){
        ans=ans+abs(arr[i]-prr[r]);
        r--;
        i++;
    }
    else{
         ans=ans+abs(arr[j]-prr[l]);
        l++;
        j--;
    }
    if(i>j){
        break;
    }
//cout<<"l="<<l<<" "<<"r="<<r<<endl;
    if(abs(arr[j]-prr[l])>abs(arr[j]-prr[r])){
        ans=ans+abs(arr[j]-prr[l]);
        l++;
        j--;;
    }
    else{
         ans=ans+abs(arr[i]-prr[r]);
        r--;
        i++;
    }
    //cout<<"l="<<l<<" "<<"r="<<r<<endl;
}
cout<<ans<<endl;



}
return 0;
}