#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long x;
cin>>x;


long long maxi=-1;
long long ind=-1;
for (long long i = 1; i <x; i++)
{
    long long a=__gcd(i,x)+i;
    if(a>=maxi){
        ind=i;
        maxi=a;
    }

}
cout<<ind<<endl;
}
return 0;
}