#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long > pos(n+1,0);
vector<long long> neg(n+1,0);

long long ans1=0;
long long ans2=0;
long long next1=0;
long long prv1=0;
long long next2=0;
long long prv2=0;
for (int i = 1; i <=n; i++)
{
    if(arr[i-1]>0){
       next1=1+prv1;
       next2=prv2;
    }
    else{
       next1=prv2;
       next2=1+prv1;
    }
    prv1=next1;
    prv2=next2;
    ans1+=next2;
    ans2+=next1;
}

//ans2=accumulate(pos.begin(),pos.end(),ans2);
//ans1=accumulate(neg.begin(),neg.end(),ans1);

 cout<<ans1<<" "<<ans2;
return 0;
}