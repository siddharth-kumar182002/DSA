#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;
long long l,r;
cin>>l>>r;
vector<long long> count(101,0);
vector<long long> count2(101,0);
for (int i = a; i <=b; i++)
{
    count[i]++;
}
long long common=0;
for (int i = l; i <=r; i++)
{
    count2[i]++;
    if(count[i]==1 && count2[i]==1){
             common++;
    }
}

if(a==l){
    common--;
}
if(b==r){
    common--;
}
cout<<(common+1)<<endl;

}
return 0;
}