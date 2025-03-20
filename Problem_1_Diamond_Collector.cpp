#include <bits/stdc++.h>
using namespace std;
int main() {
//freopen("diamond.in", "r", stdin);
//	freopen("diamond.out", "w", stdout);
long long n,k;
cin>>n>>k;
vector<long long> arr;

for(int i=0; i<n;i++){
  long long temp;
  cin>>temp;
  arr.push_back(temp);

}
long long maxi=-1;
long long count=1;
for (int i = 0; i < n; i++)
{
    long long q=arr[i];
    for (int j = 0; j < n; j++)
    {
        if(i==j){
            continue;
        }
        if(abs(arr[j]-q)<=k){
           count++;
        }
                   maxi=max(maxi,count);
    }
    count=1;
}
cout<<maxi<<endl;
return 0;
}