#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int n;
cin>>n;
string s;
cin>>s;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
vector<long long> zero;
vector<long long> one;
for (int i = 0; i < n; i++)
{
    if(s[i]=='1'){
        one.push_back(arr[i]);
    }
    else{
        zero.push_back(arr[i]);
    }
}
sort(zero.begin(),zero.end());
sort(one.begin(),one.end());
if(zero.size()>0 && one.size()>0){
    swap(zero[zero.size()-1],one[0]);
}
long long ans=0;
for (int i = 0; i < one.size(); i++)
{
    ans=ans+one[i];
}
cout<<ans<<endl;



return 0;
}