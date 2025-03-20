#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
    string s="";
for (int i = 0; i < 8; i++)
{
    string v;
    cin>>v;
    for (int j = 0; j < 8; j++)
    {
        if(v[j]!='.'){
            s+=v[j];
        }
    }
    
}
cout<<s<<endl;
}
return 0;
}