#include <bits/stdc++.h>
using namespace std;


void printDivisors(int n,set<long long> &divisor) 
{ 
    // Note that this loop runs till square root 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                divisor.insert(i);
  
            else // Otherwise print both 
            divisor.insert(i);
            divisor.insert(n/i);
                //cout << " "<< i << " " << n/i; 
        } 
    } 
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
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
set<long long> divisor;
printDivisors(n,divisor);
//10--->1 ,2 ,5, 10
//1 1 1 1 0 1 1 1 1 0
/*for(auto x:divisor){
    cout<<x<<" ";
}
cout<<endl;*/

long long ans=0;
for (auto x:divisor)
{
    long long k=x;
    long long m=0;
    for (int j = 0; j <n-k; j++)
    {
        long long num=abs(arr[j]-arr[j+k]);
        m=__gcd(m,num);
    }
    if(m>1 || m==0){
      //  cout<<k<<endl;
        ans++;
    }
    

}
cout<<ans<<endl;

}
return 0;
}