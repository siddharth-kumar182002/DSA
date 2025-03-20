#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,d,k;
cin>>n>>d>>k;

long long maxi=-1;
long long mini=1e10;
vector<vector<long long>> arr(n+1,vector<long long> (2,0));
for (int i = 0; i < k; i++)
{
    long long l,r;
    cin>>l>>r;
    arr[l][0]++;
    arr[r][1]++;
}
long long over=0;
for (int i = 1; i <=d; i++)
{
    over=over+arr[i][0];
}
mini=over;
maxi=over;
long long b=1;
long long m=1;
long long lo=1;
long long hi=d;

while(hi<n){
    
 over=over-arr[lo][1];
 lo++;
 hi++; 
over=over+arr[hi][0];
// cout<<"lo"<<lo<<endl;
//     cout<<"hi="<<hi<<endl;
// cout<<"ove="<<over<<endl;
// cout<<"mini"<<mini<<endl;
// cout<<"maxi"<<maxi<<endl;
if(mini>over){
mini=min(mini,over);
m=lo;
}
if(maxi<over){
maxi=max(maxi,over);
b=lo;
}

 
}

cout<<b<<" "<<m<<endl;

}
return 0;
}