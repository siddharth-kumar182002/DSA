#include <bits/stdc++.h>
using namespace std;
double eps=1e-9;
bool f(vector<long long> arr[],double r ,long long s,long long n){
    long long sum=s;
    for (int i = 0; i < n; i++)
    {
        double x=arr[i][0]; 
         double y=arr[i][1]; 
          double k=arr[i][2]; 
double z=sqrt((x*x)+(y*y));
        if((z<=r)){
               sum=sum+k;
        }
        //cout<<"r"<<r<<" ";
    }
    if(sum>=1e6){
       // cout<<"one"<<endl;
        return true;
    }
    else{
       // cout<<"zero"<<endl;
        return false;
    }
}
int main() {
long long n,s;
cin>>n>>s;
vector<long long> arr[n];

for (int i = 0; i <n; i++)
{
    long long x;
    long long y;
    long long k;
    cin>>x>>y>>k;
    arr[i].push_back(x);
    arr[i].push_back(y);
    arr[i].push_back(k);
}
//cout<<f(arr,10000,s,n)<<endl;

double lo=0;
double hi=1e5;
//ffffttt
while(hi-lo>eps){
    double mid=(hi+lo)/2;
    if(f(arr,mid,s,n)){
        hi=mid;
    }
    else{
        lo=mid+(eps);
    }
    //cout<<setprecision(8)<<"lo"<<lo<<" ";
   // cout<<setprecision(8)<<"hi"<<hi<<endl;
}
//cout<<f(arr,lo,s,n)<<endl;
if(f(arr,lo,s,n)){
    cout<<fixed<<setprecision(7)<<lo<<endl;
}
else if(f(arr,hi,s,n)){
   cout<<fixed<<setprecision(7)<<hi<<endl;
}
else{
    cout<<-1<<endl;
}

return 0;
}