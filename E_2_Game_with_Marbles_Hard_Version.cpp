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
for (int i = 0; i < n; i++)
{
    cin>>brr[i];
}
vector<pair<long long,long long>> crr(n);
for (int i = 0; i < n; i++)
{
    crr[i]={arr[i]+brr[i],i};
}

sort(crr.rbegin(),crr.rend());
long long turn =0;
for (int i = 0; i < n; i++)
{
    if(turn%2==0){
        arr[crr[i].second]-=1;
        brr[crr[i].second]=0;
    }
    else{
         brr[crr[i].second]-=1;
        arr[crr[i].second]=0;
    }
    turn++;
}

long long a=0;
long long b=0;
for (int i = 0; i < n; i++)
{
    a=a+arr[i];
    b=b+brr[i];
}

cout<<a-b<<endl;

}
return 0;
}