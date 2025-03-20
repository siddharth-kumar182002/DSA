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
vector<string> g(n);
for(int i=0;i<n;i++){
    cin>>g[i];
}
vector<long long> arr(n);
for(int i=0;i<n;i++){
    arr[i]=i+1;
}


for(int i=0;i<n;i++){
    
    for(int j=1;j<n;j++){
           long long y=arr[j];
           long long x=arr[j-1];
           if(g[x-1][y-1]=='1'){
               if(x>y){
                swap(arr[j],arr[j-1]);
               }
           }
           else{
               if(x<y){
                swap(arr[j],arr[j-1]);
               }
           }
    }
}

for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;


}
return 0;
}