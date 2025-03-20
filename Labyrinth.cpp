#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,m;
cin>>n>>m;
vector<string> arr(n);
pair<long long,long long> start,end;
for (int i = 0; i <n; i++)
{
     cin>>arr[i];
     for (int j = 0; j <m; j++)
     {
        if(arr[i][j]=='A'){
            start={i,j};
        }
        if(arr[i][j]=='B'){
            end={i,j};
        }
     }
     
}

priority_queue <pair<long long,pair<long long,long long>>, vector<pair<long long,pair<long long,long long>>>, greater<pair<long long,pair<long long,long long>>>> pq;
vector<vector<long long>> dist(n,vector<long long> (m,1e9));
dist[start.first][start.second]=0;
pq.push({0,start});
vector<vector<pair<long long,long long>>> ans(n,vector<pair<long long,long long>> (m));
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        ans[i][j]={i,j};
    }
    
}
 
while(!pq.empty()){
    long long d=pq.top().first;
    pair<long long,long long> posn=pq.top().second;
    pq.pop();
//cout<<posn.first<<" "<<posn.second<<endl;
    long long row[4]={-1,0,1,0};
    long long col[4]={0,1,0,-1};
    for (int i = 0; i < 4; i++)
    {
        long long x=posn.first+row[i];
        long long y=posn.second+col[i];
        if(x>=0 && x<n && y>=0 && y<m && (arr[x][y]=='.' || arr[x][y]=='B')){
            if(d+1<dist[x][y]){
                dist[x][y]=d+1;
                pq.push({d+1,{x,y}});
                ans[x][y]={posn.first,posn.second};
            }
        }
    }
    
}
if(dist[end.first][end.second]==1e9){
    cout<<"NO"<<endl;
}
else{
cout<<"YES"<<endl;
cout<<dist[end.first][end.second]<<endl;

string path="";
while(!(ans[end.first][end.second]==end)){
long long px=ans[end.first][end.second].first;
long long py=ans[end.first][end.second].second;
long long x=end.first;
long long y=end.second;
if(px-x==1 &&py-y==0){
path+="U";
}
else if(px-x==0 &&py-y==1){
path+="L";
}
else if(px-x==-1 &&py-y==0){
path+="D";
}
else if(px-x==0 &&py-y==-1){
    path+="R";
}
end=ans[end.first][end.second];
}
reverse(path.begin(),path.end());
cout<<path<<endl;

}

 
return 0;
}