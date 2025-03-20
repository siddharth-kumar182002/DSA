#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long > arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

long long k1=0;
long long i1=-1;
long long k2=0;
long long i2=-1;

for (int i = 0; i < n; i++)
{
    if(arr[i]==arr[0]){
        k1++;
        if(k1==k){
            i1=i;
        }
    }
}
for (int i = n-1; i >=0; i--)
{
    if(arr[i]==arr[n-1]){
        k2++;
         if(k2==k){
            i2=i;
        }
    }
}

if(arr[0]==arr[n-1]){
if(k1>=k){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
else{

if(i1==-1 || i2==-1){
    cout<<"NO"<<endl;
}
else{
    if(i2<=i1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

}



}
return 0;
}