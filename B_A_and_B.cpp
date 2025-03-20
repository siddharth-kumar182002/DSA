#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b;
cin>>a>>b;

if(a>b){
    swap(a,b);
}
for (long long i = 0; i <=1e5; i++)
{
    long long m=(i*(i+1)/2);
    long long n=((b-a)/2);
    long long x=n+(m/2);
    if((b-a)%2!=0){
        x++;
    }
    
    long long y=(m/2)-n;
   
    if(x>=0 && y>=0 &&  ((x-y)==(b-a)) && (x+y==m)){
        cout<<i<<endl;
        break;
    }
}

}
return 0;
}