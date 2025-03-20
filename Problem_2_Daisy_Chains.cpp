#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;

vector<long long> arr(n+1);
vector<long long> sum(n+1);

long long s=0;
sum[0]=s;
for (int i = 1; i <=n; i++)
{
     cin>>arr[i];
     s=s+arr[i];
     sum[i]=s;
}


long long count=n;
for (int i = 1; i <=n; i++)
{
    for (int j = i+1; j <=n; j++)
    {
        long long mean=(sum[j]-sum[i-1])/(j-i+1);
        if(mean*(j-i+1)!=(sum[j]-sum[i-1])){
               continue;
        }
        //cout<<"mean"<<mean<<endl;
        for (int k = i; k <=j; k++)
        {
              if(arr[k]==mean){
                count++;
                break;
              }
        }
        


    }
    
}

cout<<count<<endl;


return 0;
}