#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,m;
cin>>n>>m;
long long mini;
long long maxi;

for (long long  i = 1; i <=n; i++)
{
    if((i*(i-1)/2)>=m){
        maxi=n-i;
        break;
    }
}

if(n<=2*m){
    mini=0;
}
else{
mini=n-2*m;
}
if(m==0){
    cout<<n<<" "<<n<<endl;
    return 0;
}

cout<<mini<<" "<<maxi<<endl;
return 0;
}