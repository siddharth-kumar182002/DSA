#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,q;
cin>>n>>q;
vector<long long> blue;
vector<long long> green;
vector<long long> red;
vector<long long> yellow;

for (int i = 1; i <=n; i++)
{
    string s;
    cin>>s;
    if(s[0]=='G'){
        green.push_back(i);
    }
     if(s[0]=='B'){
        green.push_back(i);
    }
     if(s[0]=='R'){
        green.push_back(i);
    }
     if(s[0]=='Y'){
        green.push_back(i);
    }
       if(s[1]=='G'){
        green.push_back(i);
    }
     if(s[1]=='B'){
        green.push_back(i);
    }
     if(s[1]=='R'){
        green.push_back(i);
    }
     if(s[1]=='Y'){
        green.push_back(i);
    }
}

while(q--){
    long long a,b;
    cin>>a>>b;
    
}


}
return 0;
}