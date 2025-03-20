#include <bits/stdc++.h>
using namespace std;

long long f(vector<long long> &arr){
    long long n=arr.size();
    long long k=0;
    for (int i = 1; i <=n; i++)
    {
        if(i%2==0){
            k=(k|arr[i-1]);
        }
        else{
              k=(k&arr[i-1]);
        }
    }
    return k;

}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
if(n%2!=0){
    long long x=2;
for (int i = 0; i <(n-4); i++)
{
    if(x==3){
        x++;
    }
    arr[i]=x;
    x++;
}
arr[n-4]=1;
arr[n-3]=3;
arr[n-2]=n-1;
arr[n-1]=n;
cout<<f(arr)<<endl;
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;
}
else{
    if(n==6){
        cout<<7<<endl;
        cout<<1<<" "<<2<<" "<<4<<" "<<6<<" "<<5<<" "<<3<<endl;
        continue;
    }
long long q=log2(n);
long long a=pow(2,q);

long long b=a-1;
long long c=a-2;
long long d=a-3;
long long e=1;

long long x=1;
for (int i = 0; i <(n-5); i++)
{
    while(x==a || x==b || x==c || x==d || x==e){
        x++;
    }
    arr[i]=x;
    x++;
}

arr[n-5]=e;
arr[n-4]=d;
arr[n-3]=c;
arr[n-2]=b;
arr[n-1]=a;

cout<<f(arr)<<endl;
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;


}

}
return 0;
}