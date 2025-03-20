#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > a(n);
vector<long long > b(n);
vector<long long> diff(n);
for (int i = 0; i < n; i++)
{
    cin>>a[i];

}
for (int i = 0; i < n; i++)
{
    cin>>b[i];

}
for (int i = 0; i <n; i++)
{
    diff[i]=b[i]-a[i];
}
sort(diff.begin(),diff.end());

long long count=0;
long long l=0;
long long r=n-1;

while(r>l){
    if((diff[r]+diff[l])>=0){
        count++;
        l++;
        r--;
    }
    else{
        l++;
    }
}

cout<<count<<endl;
 
}
return 0;
}