#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
map<string,int> m;
vector<string> arr(n);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    
}

for (int i = n-1; i>=0; i--)
{
    if(m[arr[i]]==0){
            cout<<arr[i]<<endl;
            m[arr[i]]=1;
    }
    
}


return 0;
}