#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m,v;
cin>>n>>m>>v;
long long maxi=0;
maxi=((n-2)*(n-3))/2+(n-1);
long long mini=0;
mini=n-1;
if(m>maxi || m<mini){
    cout<<-1<<endl;
    return 0;
}

long long s;
if(v!=1){
    s=1;
}
else{
    s=n;
}
long long f=0;
for (int i = 1; i <=n; i++)
{
if(i==s){
    continue;
}
    for (int j = i+1; j <=n; j++)
    {
        if(m==1){
            f=1;
            break;

        }
        if(j==s){
            continue;
        }
        cout<<i<<" "<<j<<endl;
        m--;
    }
    if(f==1){
        break;
    } 
}
cout<<s<<" "<<v<<endl;


return 0;
}