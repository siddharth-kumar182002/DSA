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
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
vector<long long> b;
vector<long long> c;
sort(a.begin(),a.end());

long long last=a[n-1];

for (int i = 0; i < n; i++)
{
    if(a[i]!=last){
        b.push_back(a[i]);
    }
    else{
        c.push_back(a[i]);
    }
}
if(b.size()==0 || c.size()==0){
    cout<<-1<<endl;
    continue;
}
cout<<b.size()<<" "<<c.size()<<endl;
for (int i = 0; i < b.size(); i++)
{
    cout<<b[i]<<" ";
}
cout<<endl;
for (int i = 0; i < c.size(); i++)
{
    cout<<c[i]<<" ";
}

cout<<endl;


}
return 0;
}