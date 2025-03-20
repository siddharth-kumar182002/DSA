#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
long long count1=0;
long long count2=0;
for (int i = 0; i < s.size(); i++)
{
    if(s[i]=='A'){
        count1++;
    }
    else{
count2++;
    }
}

if(count1>count2){
    cout<<"A"<<endl;
}
else{
    cout<<"B"<<endl;
}

}
return 0;
}