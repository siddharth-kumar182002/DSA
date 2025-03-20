#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string a;
cin>>a;
string b;
cin>>b;
vector<long long > zero;
vector<long long > one;
for (int i = 0; i < a.size(); i++)
{
    if( a[i]==b[i] && a[i]=='0'){
          zero.push_back(i);
    }
    if(a[i]==b[i] && a[i]=='1'){
          one.push_back(i);
    }
}
int f=0;
for (int i = 0; i < zero.size(); i++)
{
      if(a[zero[i]+1]==b[zero[i]+1] && a[zero[i]+1]=='1'){
            f=1;
            break;
      }
}
if(f==1){
      cout<<"YES"<<endl;
}
else{
      cout<<"NO"<<endl;
}


}
return 0;
}