#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
string s1;
string s2;
cin>>s1>>s2;
string c1=s1;
string c2=s2;
sort(c1.begin(),c1.end());
sort(c2.begin(),c2.end());
if(c1!=c2){
    cout<<"NO"<<endl;
    continue;
}
int f=0;
long long j=0;
for (int i = 0; i <n; i++)
{
    if(s1[i]=='b'){
        continue;
    }

    while(s2[j]=='b' && j<n){
        j++;
    }

    if(s1[i]!=s2[j] ||(s1[i]=='a' && i>j) ||(s1[i]=='c' && i<j)){
        f=1;
        cout<<"NO"<<endl;
        break;
    }
j++;

}
if(f!=1){
    cout<<"YES"<<endl;
}


}
return 0;
}