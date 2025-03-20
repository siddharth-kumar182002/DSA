#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
long long a=0;
long long b=0; 
long long ch=0; 

for (int i = 0; i < n; i++)
{

    cin>>arr[i];
    if(i!=0 && i!=n-1){
    if(arr[i]%2==0){
        a=a+arr[i]/2;
    }
    else{
       b=b+((arr[i]+1)/2);
    }
    if(arr[i]>1){
        ch=1;
    }
    }

}

if(n==3){
if(arr[1]%2!=0){
    cout<<-1<<endl;
    continue;
}
}
if(ch==0){
    cout<<-1<<endl;
    continue;
}
cout<<a+b<<endl;


}
return 0;
}