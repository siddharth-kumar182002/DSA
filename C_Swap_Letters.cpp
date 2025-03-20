#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
string s,t;
cin>>s>>t;


//bababb
//ababaa
long long u=-1;
long long d=-1;
vector<pair<long long,long long> > arr;
for (int i = 0; i < n; i++)
{
    if(s[i]=='a' && t[i]=='b'){
       // cout<<"i"<<i<<endl;
           if(u==-1){
           u=i+1;
           }
           else{
               arr.push_back({u,i+1});
               u=-1;
           }
    }
    else if(s[i]=='b' && t[i]=='a'){
           if(d==-1){
              d=i+1;
           }
           else{
               arr.push_back({d,i+1});
               d=-1;
           }
    }
    else{
        continue;
    }
}

if(u!=-1 && d!=-1){
    arr.push_back({u,u});
    arr.push_back({d,u});
}

if((u!=-1 && d==-1) || (u==-1 && d!=-1) ){
    cout<<-1<<endl;
    return 0;
}
cout<<arr.size()<<endl;
for(auto x:arr){
cout<<x.first<<" "<<x.second<<endl;
}

return 0;
}