#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
map<string,int> m;

m["A"]=1e6;
m["B"]=1e6;
m["C"]=1e6;
m["AB"]=1e6;
m["AC"]=1e6;
m["BC"]=1e6;
m["ABC"]=1e6;


for (int i = 0; i < t; i++)
{
    int cost;
    cin>>cost;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    m[s]=min(m[s],cost);
}

int ans=min(m["A"]+m["B"]+m["C"],m["ABC"]);
ans = min(ans, m["A"]+m["BC"]);
ans = min(ans, m["B"]+m["AC"]);
ans = min(ans, m["C"]+m["AB"]);
ans = min(ans, m["AB"]+m["BC"]);
ans = min(ans, m["AC"]+m["BC"]);
ans = min(ans, m["AB"]+m["AC"]);

if(ans!=1e6){
    cout<<ans<<endl;
}
else{
    cout<<-1<<endl;
}





return 0;
}