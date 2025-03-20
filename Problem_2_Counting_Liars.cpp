#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<pair<char,long long>> arr(n);

for (int i = 0; i <n; i++)
{
    cin>>arr[i].first;
    cin>>arr[i].second;
}

int mini=1e6;

int count;
for (int i = 0; i < n; i++)
{
    count=0;
    for (int j = 0; j < n; j++)
    {
            if(arr[j].first=='L'){
                      if(arr[i].second>arr[j].second){
                        count++;
                      }
            }
            else{
                if(arr[i].second<arr[j].second){
                     count++;
              }
            }
              //mini=min(mini,count);
        
        
    }
    mini=min(mini,count);
   // cout<<mini<<endl;
    
}

cout<<mini<<endl;


return 0;
}