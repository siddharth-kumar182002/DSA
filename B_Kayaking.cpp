#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<long long> arr;
for (int i = 0; i < 2*n; i++)
{
    int temp;
    cin>>temp;
    arr.push_back(temp);

}

sort(arr.begin(),arr.end());


long long ans=1e8;
for (int i = 0; i < 2*n; i++)
{
    for (int j = i+1; j <2*n; j++)
    {
        vector<long long> res;
        for (int k = 0; k <2*n;k++)
        {
            if(k!=i && k!=j){
            
            res.push_back(arr[k]);
            }
        }
long long count=0;
        for (int k = 0; k <2*n-2; k+=2)
        {
            
            count=count+(res[k+1]-res[k]);
        }
        ans=min(ans,count);
        
    }
    
}

cout<<ans<<endl;


return 0;
}