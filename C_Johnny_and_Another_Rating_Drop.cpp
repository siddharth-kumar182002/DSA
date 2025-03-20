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
long long sum=0;
for (long long i = 1; i <=60; i++)
{
    long long val=i;
    long long diff=1LL<<i;
    long long posn=diff>>1LL;
    if((n-posn)>=0){
    sum=sum+val*(((n-posn)/diff)+1);
    }
    //cout<<posn<<endl;
   
}
cout<<sum<<endl;

}
return 0;
}