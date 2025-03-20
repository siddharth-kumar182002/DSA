#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long x,y;
cin>>x>>y;
long long n=2*(abs(x-y));
cout<<n<<endl;

for (int i = (y+1); i <=(x-1); i++)
{
    cout<<i<<" ";
}
for (int i = x; i >=y; i--)
{
    cout<<i<<" ";
}
cout<<endl;

}
return 0;
}