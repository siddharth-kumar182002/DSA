#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);
long long maxi=-1e9;

for (int i = 0; i < n; i++)
{
   cin>>arr[i];
   maxi=max(maxi,arr[i]);
}

if(maxi==0 && n%2!=0){
   for(auto x:arr){
    cout<<x<<" ";
   }
   cout<<endl;
    return 0;
}
//+ve------>-ve-1;increases
//-ve------>+ve-1;decreases
//3---(-4)--------3....nochanges if multiplied many times;
long long ind=-1;
long long f=0;
for (int i = 0; i < n; i++)
{
    if(maxi==arr[i] &&f==0){
        ind=i;
        f=1;
        continue;
    }
    if(arr[i]>=0){
       arr[i]=(-1LL*arr[i])-1;
    }
    
}
//-5 -4 -3 -2 -2
//4*48=192
//5*24=120
if(n%2==0){
    if(arr[ind]>=0){
    arr[ind]=(-1LL*arr[ind])-1;
    }
}
else{
    if(arr[ind]<=0){
          arr[ind]=(-1LL*arr[ind])-1;
    }
}
for(auto x: arr){
    cout<<x<<" "; 
}
cout<<endl;


return 0;
}