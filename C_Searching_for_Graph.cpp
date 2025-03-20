#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,p;
cin>>n>>p;
long long edges=2*n+p;
for (int i = 1; i <=n; i++)
{
    for (int j = i+1; j <=n; j++)
    {
        if(edges==0){
            break;
        }
        cout<<i<<" "<<j<<endl;
        edges--;
    }
    if(edges==0){
        break;
    }
    
}

}
return 0;
}