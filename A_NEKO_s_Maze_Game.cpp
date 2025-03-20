#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,q;
cin>>n>>q;
long long ch=0;
set<pair<long long, long long >> st;//forbidden
while(q--){
long long a,b;
cin>>a>>b;
if(st.count({a,b})){
    st.erase({a,b});
}
else{
    st.insert({a,b});
}

for (int i = a-1; i <=a+1; i++)
{
    for (int j= b-1;j <=b+1; j++)
    {
        if(i==a){
            continue;
        }
        if(!(i>=1 && i<=2 && j>=1 && j<=n)){
            continue;
        }
        
        if(i==a && j==b){
            continue;
        }
        if(st.count({i,j})){
              if(st.count({a,b})){
                ch++;
              }
              else{
                ch--;
              }
        }


    }
    
}

if(ch>=1){
    cout<<"No"<<endl;
}
else{
    cout<<"Yes"<<endl;
}

}
return 0;
}