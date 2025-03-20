#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<string> arr(n);
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}

long long rmaxi=-1;
long long r=-1;
long long cmaxi=-1;
long long c=-1;

for (int i = 0; i <n; i++)
{
    long long count=0;
    for (int j = 0; j <m; j++)
    {
        if(arr[i][j]=='#'){
            count++;
        }
    }
    if(count>=rmaxi){
        rmaxi=count;
        r=i;
    }
    
}
for (int i = 0; i <m; i++)
{
    long long count=0;
    for (int j = 0; j <n; j++)
    {
        if(arr[j][i]=='#'){
            count++;
        }
    }
    if(count>=cmaxi){
        cmaxi=count;
        c=i;
    }
    
}
cout<<(r+1)<<" "<<(c+1)<<endl;


}
return 0;
}