#include <bits/stdc++.h>
using namespace std;
int main() {
string s;
cin>>s;
long long rem=0;
long long dec=0;
long long j=0;
for(long long i=(s.size()-1);i>-1;i--) {
    rem=s[i]-'0';
    cout<<"rem="<<rem<<endl;
    dec += rem * pow(2, j);
    j++;
    
  }
  cout<<"dec="<<dec<<endl;
  
long long t=1;
long long count=0;

while(t<dec){
    count++;
    t=t*4;

}
cout<<count;
return 0;
}