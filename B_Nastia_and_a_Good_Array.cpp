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

long long mini=INTMAX_MAX;
long long ind=-1;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]<mini){
        ind=i;
        mini=arr[i];
    }
}

cout<<(n-1)<<endl;
for (int i = 0; i <n; i++)
{
    if(i==ind){
        continue;
    }
    if(i<=ind){
    cout<<(i+1)<<" "<<(ind+1)<<" "<<(mini+ind-i)<<" "<<mini<<endl;
    }
    else{
        cout<<(i+1)<<" "<<(ind+1)<<" "<<(mini+i-ind)<<" "<<mini<<endl;
    }
}



}
return 0;
}