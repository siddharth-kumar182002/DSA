#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long n;
cin>>n;
string l,r;
cin>>l>>r;
vector<long long> arr[10];
for (int i = 0; i < s.size(); i++)
{
    arr[s[i]-'0'].push_back(i);
}

long long f=0;
long long prv=-1;
for (int i = 0; i < n; i++)
{
    long long maxi=-1;
    for (int j = l[i]-'0'; j <=(r[i]-'0'); j++)
    {
        auto it=upper_bound(arr[j].begin(),arr[j].end(),prv);
        if(it==arr[j].end()){
            f=1;
            break;
        }
        else{
            maxi=max(maxi,*it);
        }
    }
    if(f==1){
        break;
    }
    prv=maxi;

}
if(f!=1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}

}
return 0;
}