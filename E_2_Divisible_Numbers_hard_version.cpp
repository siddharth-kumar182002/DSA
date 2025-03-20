#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b,c,d;
cin>>a>>b>>c>>d;

vector<long long> arr;
for (int i = 1; i*i<=a; i++)
{
    if(a%i==0){
        arr.push_back(i);
        
        arr.push_back(a/i);
        
    }
}
vector<long long> brr;
for (int i = 1; i*i<=b; i++)
{
    if(b%i==0){
        brr.push_back(i);
        
        brr.push_back(b/i);
        
    }
}
//cout<<__gcd(44546,22273*50032)<<endl;
int f=0;
for (int i = 0; i < arr.size(); i++)
{
    for (int j = 0; j < brr.size(); j++)
    {
        long long m=arr[i]*brr[j];
       //  cout<<m<<endl;
        long long k=a*b/m;
           long long y=(d/k)*k;
           if(y>b){
            long long x=(c/m)*m;
            if(x>a){
                cout<<x<<" "<<y<<endl;
                f=1;
                break;
            }
           }
        

    }
    if(f==1){
        break;
    }
    
}

if(f!=1){
    cout<<-1<<" "<<-1<<endl;
}

}
return 0;
}