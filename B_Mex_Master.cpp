#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> arr(n);

int cz=0;
int flag=0;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]==0){
        cz++;
    }
    if(arr[i]>1){
       flag=1;
    }
}

int x=n-cz;
if(cz<=x+1){
    cout<<0<<endl;
}
else{

    if(flag==1 || cz==n){
        cout<<1<<endl;
    }
    else{
        cout<<2<<endl;
    }

}





}
return 0;
}