#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(32,0);
long long j=0;
while(n>0){
    if(n&1==1){
        arr[j]=1;
    }
    j++;
   n=n>>1;
}


for (int i = 0; i <=31; i++)
{
    if(i+1<=31 && arr[i]==1 && arr[i+1]==1){
            arr[i]=-1;
            i++;
            while(arr[i]==1){
                arr[i]=0;
                i++;
            }
            arr[i]=1;
            i--;
    }
    
}
cout<<arr.size()<<endl;
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;
}
return 0;
}