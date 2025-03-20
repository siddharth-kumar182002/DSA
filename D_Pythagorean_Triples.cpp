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
//c=a^2-b;
//c^2=a^2+b^2;
long long count=0;
for (int i = 1; (((i*i)-1)/2)<=n; i++)
{
    long long x=(i*i)-1;
    if(x%2==0 && (x/2)>0){
       // cout<<"i="<<i<<endl;
        if(((x/2)+1)<=n){
        count++;
        }
    }
}
cout<<count<<endl;


}
return 0;
}