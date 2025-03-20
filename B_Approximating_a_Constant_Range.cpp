#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
multiset<long long> mt;

long long l=0;
long long len=1;
for (int r = 0; r < n; r++)
{
        mt.insert(arr[r]);
    long long a=*(--mt.end());
    long long b=*(mt.begin());
    while((a-b)>1 && l<=r && l<n){
         mt.erase(mt.find(arr[l++]));
       a=*(mt.rbegin());
       b=*(mt.begin());
    }
    len=max(len,r-l+1);
}
cout<<len<<endl;
return 0;
}