#include <bits/stdc++.h>
using namespace std;
const int m=1e6+10;
long long cnt[m];
vector<long long> arr;
long long num;
void add(long long r){
cnt[r]++; 
if(cnt[r]==1){
    num++;
}
return;  
}
void remove(long long l){
    cnt[l]--;
    if(cnt[l]==0){
        num--;
    }
    return;
}

bool good(long long k){
return num<=k;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n,k;
cin>>n>>k;
num=0;
for (int i = 0; i <n; i++)
{
    long long a;
    cin>>a;
    arr.push_back(a);
}
long long l=0;
long long len=-1;
pair<long long,long long> p;
for (int r = 0; r<n; r++)
{
    add(arr[r]);
    while(!good(k)){
        remove(arr[l]);
        l++;
    }
if((r-l+1)>len){
    len=r-l+1;
    p={l+1,r+1};
}

}
cout<<p.first<<" "<<p.second<<endl;

return 0;
}