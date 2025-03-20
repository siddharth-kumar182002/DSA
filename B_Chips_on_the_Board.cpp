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
vector<long long> a(n);
vector<long long> b(n);
long long mini1=1e11;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
    mini1=min(mini1,a[i]);
}
long long mini2=1e11;
for (int i = 0; i < n; i++)
{
    cin>>b[i];
    mini2=min(mini2,b[i]);
    
}

long long ans1=0;
long long ans2=0;
    for (int i = 0; i <n; i++)
    {
        ans1=ans1+(mini1+b[i]);
    }
    


     for (int i = 0; i <n; i++)
    {
        ans2=ans2+(mini2+a[i]);
    }

cout<<min(ans1,ans2)<<endl;
}
return 0;
}