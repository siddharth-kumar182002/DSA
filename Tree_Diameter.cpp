#include <bits/stdc++.h>
using namespace std;
vector<int> g[200001];
//diameter[i] : what is diameter if path pass through node i
long long diameter[200001];
//downPath[i] : longest simple path in subtree rooted at i that starts at i
int downpath[200001];



void depth(long long src,long long par){

for(auto x:g[src]){

if(x!=par){

depth(x,src);
downpath[src]=max(downpath[src],1+downpath[x]);
}

}
}


void solve(int src, int par)
{
    long long ans=0;
    vector<long long> childdepths;
    for(auto x:g[src]){
        if(x!=par){
            solve(x,src);
            childdepths.push_back(downpath[x]);
            ans=max(ans,diameter[x]);
        }
    }

    sort(childdepths.begin(),childdepths.end());
 int numOfchildren = childdepths.size();
 if(numOfchildren == 0){
    diameter[src] = 0;
 }
    else if(numOfchildren == 1){
        diameter[src] = 1 + childdepths[0];
    }
    else {
        diameter[src] = 2+childdepths[numOfchildren - 1]+childdepths[numOfchildren - 2];
    }
 
    diameter[src] = max(diameter[src], ans);
}



int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;

for (int i = 0; i < n-1; i++)
{
    long long a,b;
    cin>>a>>b;
    g[a].push_back(b);
    g[b].push_back(a);
}

depth(1,0);
solve(1,0);


cout<<diameter[1]<<endl;


return 0;
}