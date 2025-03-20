#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
map<long long,long long> cnt;
vector<vector<long long>> arr(n+1,vector<long long>(n));
for (long long i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    arr[0][i]=(temp);
    cnt[temp]++;

}

for(long long i = 0; i < n; i++){


for (long long j = 0; j < n; j++)
{
     arr[i+1][j]=(cnt[arr[i][j]]);

}
cnt.clear();
for (long long j = 0; j < n; j++)
{
    cnt[arr[i+1][j]]++;
}
}
//cout<<arr[3][3]<<endl;

int q;
cin>>q;
while (q--){
 long long x,y;
cin>>x>>y;
x--;
long long temp=y;
y=min(y,n);

cout<<arr[y][x]<<endl;
}



}
return 0;
}