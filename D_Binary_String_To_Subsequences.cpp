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

//0101010101
//0000011111
//
//01010000010101011111111
//11111234555555554321678
//1--5,6,7,8
//0--
//000111
vector<long long > one;
vector<long long> zero;
long long count=0;
vector<long long> ans;
for (int i = 0; i < s.size(); i++)
{
    if(s[i]=='0'){
         if(one.size()==0){
             count++;
             zero.push_back(count);
             ans.push_back(count);
         }
         else{
            long long x=*(one.rbegin());
            ans.push_back(x);
            one.pop_back();
            zero.push_back(x);
         }
    }
    else{
          if(zero.size()==0){
             count++;
             one.push_back(count);
            ans.push_back(count);
         }
         else{
            long long x=*(zero.rbegin());
           ans.push_back(x);
            zero.pop_back();
            one.push_back(x);
         }

    }
}

cout<<count<<endl;
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;



}
return 0;
}