#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,x,y;
cin>>n>>x>>y;
string s;
cin>>s;
//1st operation string reverse
// 2nd operation bits reverse(do only when zeroes are available)
//not feasble if reverse zeroes cost more than individual zero
//000000100001000000000001
long long count=0;
for (int i = 0; i <n-1; i++)
{
    if(s[i]=='1' && s[i+1]=='0'){
        count++;
    }
}

if(count==0){
    if(s[0]=='1'){
    cout<<0<<endl;
    }
    else{
        cout<<y<<endl;
    }
}
else{
if(s[0]=='1'){
    count--;
}
if(y<=x){
    cout<<y*(count+1)<<endl;
}
else{
    cout<<x*(count)+y<<endl;
}
}
return 0;
}