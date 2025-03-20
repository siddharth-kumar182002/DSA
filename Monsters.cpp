#include <bits/stdc++.h>
using namespace std;


long long n,m;
vector<string> arr;


bool isvalid(long long x,long long y){
   if(x>=0 && y>=0 && x<n && y<m && arr[x][y]!='#'){
    return true;
   }
   return false;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

cin>>n>>m;

for (int i = 0; i <n; i++)
{
    string x;
    cin>>x;
    arr.push_back(x);
}


queue<pair<long long,pair<long long,long long>>> q;
vector<vector<long long>> dist(n,vector<long long> (m,1e9));
for (int i = 0; i <n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(arr[i][j]=='M'){
        q.push({0,{i,j}});
        dist[i][j]=0;
        }
    }
    
}
int dr[4]={-1,0,1,0};
int dc[4]={0,-1,0,1};
while(!q.empty()){
    auto it=q.front();
    q.pop();
long long x=it.second.first;
long long y=it.second.second;
//cout<<x<<" "<<y<<endl;
for (int i = 0; i < 4; i++)
{
    long long newx=it.second.first+dr[i];
    long long newy=it.second.second+dc[i];

    if(isvalid(newx,newy) && (dist[newx][newy]>(dist[x][y]+1))){
         dist[newx][newy]=dist[x][y]+1;
         q.push({dist[newx][newy],{newx,newy}});
    }
}

}


// for(auto x:dist){
//     for(auto y:x){
//         cout<<y<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl;



vector<vector<long long>> dista(n,vector<long long> (m,1e9));
for (int i = 0; i <n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(arr[i][j]=='A'){
        q.push({0,{i,j}});
        dista[i][j]=0;
        }
    }
    
}

vector<vector<pair<long long,long long>>> ans(n,vector<pair<long long,long long>> (m));
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        ans[i][j]={i,j};
    }
    
}
pair<long long,long long> end={-1,-1};
while(!q.empty()){
    auto it=q.front();
    q.pop();
long long x=it.second.first;
long long y=it.second.second;
//cout<<x<<" "<<y<<endl;
if(x==(n-1) || x==0 || y==0 || y==m-1){
    end={x,y};
}
for (int i = 0; i < 4; i++)
{
    long long newx=it.second.first+dr[i];
    long long newy=it.second.second+dc[i];

    if(isvalid(newx,newy) && (dist[newx][newy]>(dista[x][y]+1)) && (dista[newx][newy]>(dista[x][y]+1))){
         dista[newx][newy]=dista[x][y]+1;
         q.push({dista[newx][newy],{newx,newy}});
          ans[newx][newy]={x,y};
          
    }
}

}

// for(auto x:dista){
//     for(auto y:x){
//         cout<<y<<" ";
//     }
//     cout<<endl;
// }
// cout<<endl;

if(end.first==(-1)){
    cout<<"NO"<<endl;
}
else{
cout<<"YES"<<endl;
cout<<dista[end.first][end.second]<<endl;
 
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