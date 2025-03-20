#include <bits/stdc++.h>
using namespace std;
int main() {
int n,k;
cin>>n>>k;


int ans=n;

for (int i = 1; i <= k; i++)
{

    int l=ans%10;
    if(l!=0){
       ans=ans-1;
    }
    else{
        ans=ans/10;
    }
}

cout<<ans;

return 0;
}