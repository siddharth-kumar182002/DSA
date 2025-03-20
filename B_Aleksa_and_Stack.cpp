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
cout<<3<<" "<<5<<" ";
long long x=5;
for (int i = 2; i < n; i++)
{
    x++;
cout<<x<<" ";
}
cout<<endl;


}
return 0;
}