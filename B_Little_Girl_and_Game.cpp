#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
string s;
cin>>s;
vector<long long> arr(26,0);
for (int i = 0; i < s.size(); i++)
{
    arr[s[i]-'a']++;
}
long long count=0;
for (int i = 0; i < 26; i++)
{
    if(arr[i]%2!=0){
        count++;
    }
}
if(count<=1){
    cout<<"First"<<endl;
    return 0;
}
if(count%2!=0){
    cout<<"First"<<endl;
}
else{
    cout<<"Second"<<endl;
}


return 0;
}