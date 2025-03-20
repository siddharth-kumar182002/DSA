#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long t;
cin>>t;

vector<vector<long long>> arr(200001,vector<long long> (20,0));
for (int i = 1; i <200001; i++)
{
   for(int j=0;j<20;j++){
    arr[i][j]=arr[i-1][j]+((i>>j)&1);
   }
}


while(t--){
long long l,r;
cin>>l>>r;
long long maxi=-1;
for (int i = 0; i <20; i++)
{
    maxi=max(maxi,arr[r][i]-arr[l-1][i]);
}

cout<<((r-l+1)-maxi)<<endl;

}
return 0;
}