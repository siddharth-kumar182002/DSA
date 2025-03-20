#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,s,r;
cin>>n>>s>>r;

int cat=s-r;
int d=r/(n-1);
int m=r%(n-1);


for (int i = 0; i <m; i++)
{
    cout<<d+1<<" ";
}
for (int i = m; i < n-1; i++)
{
    cout<<d<<" ";
}
cout<<cat<<" ";
cout<<endl;


}
return 0;
}