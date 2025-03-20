#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
string a,b;
cin>>a>>b;
vector<long long> count1(26,0);
vector<long long> count2(26,0);
for (int i = 0; i < n; i++)
{
     count1[a[i]-'a']++;
}
for (int i = 0; i < n; i++)
{
     count2[b[i]-'a']++;
}
int f=0;
for (int i = 0; i < 26; i++)
{
    if(count1[i]<count2[i]){
             f=1;
             break;
    }
    else{
        long long rem=count1[i]-count2[i];
        if(rem%k!=0 || (i==25 && rem>0)){
            f=1;
            break;
        }
        
            count1[i+1]+=rem;
        
    }
}
if(f==1){
    cout<<"No"<<endl;
}
else{
    cout<<"Yes"<<endl;
}


}
return 0;
}