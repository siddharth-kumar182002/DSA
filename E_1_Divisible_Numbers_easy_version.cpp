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
    if(i==1){
        arr.push_back(1);
        continue;
    }
    if(a%i==0){
        arr.push_back(i);
        if(a!=a/i){
        arr.push_back(a/i);
        }
    }
}
vector<long long> brr;
for (int i = 1; i*i<=b; i++)
{
    if(i==1){
        brr.push_back(1);
        continue;
    }
    if(b%i==0){
        brr.push_back(i);
        if(i!=(b/i)){
        brr.push_back(b/i);
        }
    }
}

int f=0;
for (int i = 0; i < arr.size(); i++)
{
    for (int j = 0; j < brr.size(); j++)
    {
        long long m=arr[i]*brr[j];
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