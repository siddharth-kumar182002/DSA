#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n,m,k;
cin>>n>>m>>k;
vector<vector<pair<long long,long long>> > arr(n+1);
for (int i = 0; i < m; i++)
{
    long long x,y,z;
    cin>>x>>y>>z;
    arr[x].push_back({y,z});
}
// for(auto x:arr){
//     for(auto y:x){
//         cout<<y.first<<" "<<y.second<<endl;
//     }
// }
vector<vector<long long> > dist(n+1,vector<long long> (k,1e18));

 priority_queue<pair<long long, long long>, vector<pair<long long, long long> >,greater<pair<long long, long long> > > pq;
 pq.push({0,1});
 dist[1][0]=0;

 while(!pq.empty()){
    long long d=pq.top().first;
     long long node=pq.top().second;
   //  cout<<node<<endl;
pq.pop();
     if(dist[node][k-1]<d){
     //   cout<<"HI"<<endl;
        continue;
     }

   for (long long i = 0; i < arr[node].size(); i++)
   {
    
             long long currn=arr[node][i].first;
             long long currd=arr[node][i].second;
             // cout<<"currn="<<currn<<endl;
             if(dist[currn][k-1]>(currd+d)){
                dist[currn][k - 1] = d + currd;
                     
                sort(dist[currn].begin(), dist[currn].end());
                pq.push({ (d + currd), currn });
             }

   }
   
 }


 for (int i = 0; i < k; i++)
 {
 
        cout<<dist[n][i]<<" ";
      
 }
 
cout<<endl;



return 0;
}