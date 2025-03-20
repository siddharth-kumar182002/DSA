#include <bits/stdc++.h>
using namespace std;

string f(string &x,string &k){
    long long c=0;

string ans="";

if(x.size()<k.size()){
    swap(x,k);
}
if(k.size()==0){
    return x;
}
long long l=x.size()-1;
long long r=k.size()-1;
while(l>=0){

    long long a=x[l]-'0';
    long long b;
    if(r>=0){
     b=k[r]-'0';
    }
    else{
         b=0;
    }
    long long sum=a+b+c;
    string sums=to_string(sum);
    if(sum>9){
       c=sums[0]-'0';
       ans+=sums[1];
    }
    else{
        ans+=sums[0];
           c=0;
    }
    l--;
    r--;

}
reverse(ans.begin(),ans.end());
return ans;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
string s;
cin>>s;
//s breaks into s1+s2
//such that s1+s2 gives minimum sum
//s2 cannot contains leading zeroes

//a*10^n+b*10^n-1+c*10^n-2+d*10^n-3.............y*10^1+z10^0;
int ind1 = n / 2, ind2 = n / 2;
		ind2++;
		while (ind2 < n && s[ind2] == '0') {
			ind2++;
		}
		while (s[ind1] == '0') {
			ind1--;
		}
//cout<<ind1<<endl;
string s1=s.substr(0,ind1);
//cout<<s1<<endl;
string s2=s.substr(ind1,n-ind1);
//cout<<s2<<endl;
//cout<<ind2<<endl;
string s3=s.substr(0,ind2);
//cout<<s3<<endl;
string s4=s.substr(ind2,n-ind2);
//cout<<s4<<endl;

string ans1=f(s1,s2);
cout<<ans1<<endl;
string ans2=f(s3,s4);
cout<<ans2<<endl;
string p=min(ans2,ans1);
//cout<<p<<endl;

return 0;
}