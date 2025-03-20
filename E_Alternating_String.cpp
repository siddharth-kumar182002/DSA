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
string s;
cin>>s;
long long ans=0;
if(n%2!=0){
    ans++;



    
}
else{
    vector<long long> odd(26,0);
    vector<long long> even(26,0);
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
           odd[s[i]-'a']++;
        }
        else{
              even[s[i]-'a']++;
        }
    }

long long maxi=-1;
    for (int i = 0; i < 26; i++)
    {
        maxi=max(maxi,odd[i]);
    }
    ans=ans+(n/2)-maxi;
    maxi=-1;
    for (int i = 0; i < 26; i++)
    {
        maxi=max(maxi,even[i]);
    }
    ans=ans+(n/2)-maxi;
    
}
}
return 0;
}