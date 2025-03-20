#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int n=s.size();
vector<int> arr(11,0);
for (int i = 0; i < n; i++)
{
    arr[int(s[i])-48]++;
}
int ans=-1;
for (int i = 0; i < 11; i++)
{
    ans=max(ans,arr[i]);

}

if(ans==4){
    cout<<-1<<endl;
}
if(ans==3){
    cout<<6<<endl;
}
if(ans==2 || ans==1){
    cout<<4<<endl;
}


}
return 0;
}