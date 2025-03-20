#include<bits/stdc++.h>
using namespace std;

typedef int64_t ll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<int64_t> vll;

#define pb push_back
#define pob pop_back()
#define mp make_pair
#define sz size()
#define ff first
#define ss second
#define PI 3.14159265359
#define M1 ll(998244353)
#define M2 ll(1000000007)
#define pres(x) cout<<fixed; cout<<setprecision(x);
#define out(x) cout<<x<<endl;

ll gcd(ll a, ll b) {
    if (b > a) {return gcd(b, a);}
    if (b == 0) {return a;}
    return gcd(b, a % b);
}
int power(int a,int b){
    int ans=1;
    while(b!=0){
        if(b&1){ans=(ans*a)%M2;b--;}
        a=(a*a)%M2;b/=2;
    }
    return ans%M2;
}
ll expo(ll a, ll b, ll mod) {
    ll res = 1; 
    while (b > 0) {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod; 
        b = b >> 1;
    } 
    return res;
}
int invmod(int n){
    int ans=1;
    ans=power(n,M2-2);
    return ans;
}
int lcm(int a,int b){
    int g=gcd(a,b);
    a/=g;a*=b;
    return a;
}
bool find(int q,int n,map<int,int> m,vi &v){
    for(int i=0;i<=n-q;i++){
      map<int,int> s;
      for(int j=i;j<i+q;j++){
        s[v[j]]++;
      }
      bool flag=true;
      for(auto it:m){
        if(it.ss>1 && (it.ss-s[it.ff])>1){
          flag=false;
          break;
        }
      }
      if(flag){
        return true;
      }
    }
    return false;
}

void solve(){
    int n;
    cin>>n;
    vi v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int repeat=-1;
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
        if(m[v[i]]>1){
            repeat=i;
        }
    }
    if(repeat==-1){
        out(0)
        return;
    }
    int l=0,r=n;
    while(r-l>1){
        int mid=(l+r)/2;
        if(find(mid,n,m,v)) r=mid;
        else l=mid+1;
    }
    if(find(l,n,m,v)) out(l)
    else out(r)
    return;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}