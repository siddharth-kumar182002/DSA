#include<iostream>
using namespace std;

long long gcd(long long a,long long b){
    long long ans;
    for(int i = 1; i <= a || i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
            ans= i;
    }

    return ans*ans;
}
int main() {
int t;
cin>>t;
long long count=0;
while(t--){
    long long n;
    cin>>n;

    for (long long j = 1; j <= n; j++)
    {
        for (long long k = 1; k <=n; k++)
        {
            long long x=(j*k)/(gcd(j,k));
            if(x<=3){
                count=count+1;
            }
        }
        
    }

    cout<<count<<endl;


}
return 0;
}