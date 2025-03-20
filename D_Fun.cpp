#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,x;
cin>>n>>x;


long long ans=0;
for (int a = 1; a <=x && a<=n; a++)
{
    for (int b = 1; b*a<=n && (b+a)<=x; b++)
    {
        long long t1=(n-(a*b))/(a+b);
        long long t2=x-(a+b);
        ans=ans+min(t1,t2);

    }
    
}
cout<<ans<<endl;

}
return 0;
}