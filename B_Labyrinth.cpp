#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,r,c,le,ri;
char arr[2001][2001];
bool vis[2001][2001];

bool isvalid(ll i,ll j){
 
    if(i<0 || j<0 || i>=n || j>=m) return false;
 
    return true;
 
}
struct node{
  ll x,y,l,r;
};

ll bfs(){
 
    deque<node> dq;
    dq.push_front({r,c,le,ri});
    vis[r][c]=true;
    ll ans=1;
 
    while(!dq.empty()){
        node temp=dq.front();
        dq.pop_front();
 
        ll x=temp.x,y=temp.y,l=temp.l,r=temp.r;
 
 
        if(isvalid(x+1,y) && arr[x+1][y]!='*' && vis[x+1][y]==false)
        vis[x+1][y]=true , dq.push_front({x+1,y,l,r}) , ans++;
 
        if(isvalid(x-1,y) && arr[x-1][y]!='*' && vis[x-1][y]==false)
        vis[x-1][y]=true , dq.push_front({x-1,y,l,r}) , ans++;
 
        if(isvalid(x,y+1) && arr[x][y+1]!='*' && vis[x][y+1]==false && r>0)
        vis[x][y+1]=true , dq.push_back({x,y+1,l,r-1}) , ans++;
 
        if(isvalid(x,y-1) && arr[x][y-1]!='*' && vis[x][y-1]==false && l>0)
        vis[x][y-1]=true , dq.push_back({x,y-1,l-1,r}) , ans++;
    }
 
    return ans;
 
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
 string s;
    //set<ll> st;
   // map<ll,ll> mp;
   // cin>>n; vll arr(n); f(i,0,n) cin>>arr[i];
 
   cin>>n>>m;
   cin>>r>>c;
   cin>>le>>ri;
 
   r-- ; c-- ;
 
   for(ll i=0;i<=n;i++)
    for(ll j=0;j<=m;j++)
      vis[i][j]=false;
 
   for(ll i=0;i<n;i++)
    for(ll j=0;j<m;j++)
      cin>>arr[i][j];
 
 
  cout<<bfs()<<endl;
return 0;
}