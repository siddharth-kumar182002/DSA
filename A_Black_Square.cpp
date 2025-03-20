#include <bits/stdc++.h>
using namespace std;
int main() {
int a1,a2,a3,a4;
cin>>a1>>a2>>a3>>a4;
string s;
cin>>s;
int l1=count(s.begin(),s.end(),'1');
int l2=count(s.begin(),s.end(),'2');
int l3=count(s.begin(),s.end(),'3');
int l4=count(s.begin(),s.end(),'4');

cout<<a1*l1+a2*l2+a3*l3+a4*l4<<endl;



return 0;
}