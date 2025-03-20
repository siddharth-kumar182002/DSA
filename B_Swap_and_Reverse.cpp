#include <bits/stdc++.h>
using namespace std;
int main() {
    ios :: sync_with_stdio(0), cin.tie(0), cout.tie(0);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
string s;
cin>>s;
vector<char> s1;
vector<char> s2;
if(k%2==0)
{
    sort(s.begin(),s.end());
    cout<<s<<endl;
    continue;
}
for (int i = 0; i <n; i++)
{
    if(i%2==0){
        s1.push_back(s[i]);
    }
    else{
        s2.push_back(s[i]);
    }
}
//cout<<"s1"<<s1<<endl;



sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
   // cout<<"s1"<<s1<<endl;
long long i1=0;
long long i2=0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
             s[i]=s1[i1];
             i1++;
        }
        else{
s[i]=s2[i2];
i2++;
        }
    }
    cout<<s<<endl;

}
return 0;
}