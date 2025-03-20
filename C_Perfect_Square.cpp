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
vector<string> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


long long moves=0;

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        long long x[4]={i,n-j-1,j,n-i-1};
        long long y[4]={j,i,n-i-1,n-j-1};
          long long maxi=-1e9;
          /*
          for (int k = 0; k < 4; k++)
          {
            cout<<x[k]<<" "<<y[k]<<endl;
          }
          */
          
        for (int k = 0; k < 4; k++)
        {
               maxi=max(maxi,(arr[x[k]][y[k]]-'a')*1LL);
        }
        for (int k = 0; k <4; k++)
        {
            moves=moves+maxi-(arr[x[k]][y[k]]-'a');
        }
    }
    
}
cout<<moves/4<<endl;
}
return 0;
}