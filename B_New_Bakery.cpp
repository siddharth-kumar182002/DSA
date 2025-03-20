#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,a,b;
cin>>n>>a>>b;
    double x=-1/(double)2;
    double y=((b-a)+(-x));
    double z=(n*a);
long long k1=b-a+1;
if(k1<0){
    k1=1;
}
k1=min(k1,n);
k1=min(k1,b);
long long temp=0;
long long maxi=-1;

//cout<<"k1="<<k1<<endl;

for (long long i =k1; i >=0; i--)
{

    long long q=i*i-2*y*i;
   // cout<<y<<endl;
    //cout<<q<<endl;
    if(q%2==0){
       long long f1=x*(i*i)+i*(y)+z;
         maxi=max(maxi,f1);
    }
   temp++;
    if(temp==2){
        break;
    }
}

cout<<maxi<<endl;
}
return 0;
}