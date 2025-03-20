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
vector<long long> ind;
for (int i = 0; i < s.size(); i++)
{
    while(!ind.empty() && s[i]>s[ind.back()]){
        ind.pop_back();
    }
    ind.push_back(i);
}

long long rep=0;
long long x=s[ind[0]];
for (int i = 0; i < ind.size(); i++)
{
    if(s[ind[i]]==x){
        rep++;
    }
}


for (int i = 0; i < (ind.size())/2; i++)
{
    swap(s[ind[i]],s[ind[ind.size()-i-1]]);
}

if(is_sorted(s.begin(),s.end())){
    cout<<ind.size()-rep<<endl;
}
else{
    cout<<-1<<endl;
}


}
return 0;
}