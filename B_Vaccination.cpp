#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,k,d,w;
cin>>n>>k>>d>>w;
vector<int> arr(n);


for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int p=1;
int count=0;
int check=arr[0]+w+d;
for (int i = 0; i < n; i++)
{
    if(count==k){
    p++;
   count=0;
   check=arr[i]+w+d;
}
    if(check>=arr[i]){
        count++;
    }
   else{
        p++;
        count=1;
        check=arr[i]+w+d;
    }
    
}

cout<<p<<endl;


}
return 0;
}