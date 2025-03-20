#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000001
int spf[MAXN];
 
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i = 2; i < MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i = 4; i < MAXN; i += 2)
        spf[i] = 2;
 
    for (int i = 3; i * i < MAXN; i++) {
        // checking if i is prime
        if (spf[i] == i) {
            // marking SPF for all numbers divisible by i
            for (int j = i * i; j < MAXN; j += i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
map<long long,long long> mp;
void getFactorization(int x)
{
    vector<int> ret;
    while (x != 1) {
        mp[spf[x]]++;
        x = x / spf[x];
    }
    return ;
}
 
// driver program for above function
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
sieve();
while(t--){
long long n;
cin>>n;
mp.clear();

for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
   // cout<<x<<endl;
    getFactorization(x);
}
long long f=0;
for(auto x:mp){
    if((x.second)%n!=0){
        cout<<"NO"<<endl;
        f=1;
        break;
    }
}
if(f!=1){
cout<<"YES"<<endl;
}
}
return 0;
}