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
vector<long long > brr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    cin>>brr[i];
}

long long count=0;
long long l=0;
for (int i = 0; i < n; i++)
{
    if(l>=n){
        break;
    }
    if(arr[l]>brr[i]){
        count++;
    }
    else{
        l++;
    }
}

cout<<count<<endl;


}
return 0;
}