#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr;
long long x=0;
for ( int i = 1; i <=n; i++)
{
    long long temp;
    cin>>temp;
   // cout<<temp;
    while(temp%2==0){
          x++;
          temp=temp/2;
    }
    //cout<<"x="<<x<<endl;
    long long temp2=0;
    long long c=i;
    while(c%2==0){
        temp2++;
           c=c/2;
    }
    arr.push_back(temp2);
}
//cout<<"hi"<<endl;

long long m=n-x;
if(m<=0){
    cout<<0<<endl;
    continue;
}
sort(arr.rbegin(),arr.rend());
//cout<<"m"<<m<<endl;
/*for(auto x: arr){
    cout<<x<<" ";
}
cout<<endl;*/
long long ans=0;
for (int i = 0; i <n; i++)
{
    if(m>0 && arr[i]>0){
    m=m-arr[i];
    ans++;
    }

    if(m<=0){
        break;
    }
}
if(m>0){
    cout<<-1<<endl;
}
else{
    cout<<ans<<endl;
}

}
return 0;
}