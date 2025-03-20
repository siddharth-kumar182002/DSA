//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int MinimumEffort(vector<vector<int>>& heights) {
        // Code here
   
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> q;
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>> dist(n,vector<int> (m,1e6));
        dist[0][0]=0;
        q.push({0,{0,0}});
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        cout<<n<<m<<endl;
        while(!q.empty()){
            auto it=q.top();
            q.pop();
            int dis=it.first;
            int nrow=it.second.first;
            int ncol=it.second.second;
            cout<<"dis"<<dis<<endl;
              cout<<"nrow"<<nrow<<endl;
                cout<<"ncol"<<ncol<<endl;
            for(int i=0;i<4;i++){
                int newrow=nrow+dr[i];
                int newcol=ncol+dc[i];
               // int edge=heights[newrow][newcol]-heights[nrow][ncol];
                //cout<<"edge="<<edge<<endl;
                if(newrow>=0 && newrow<n && newcol>=0 && newcol<m){
                int edge=heights[newrow][newcol]-heights[nrow][ncol];
                cout<<"newr="<<newcol<<endl;
                cout<<"h1="<<heights[newrow][newcol]<<endl;
                     cout<<"edge="<<edge<<endl;
                 int x=max(edge,dis);
                 if(dist[newrow][newcol]>x){
                 dist[newrow][newcol]=x;
               q.push({dist[newrow][newcol],{newrow,newcol}});
                 }
                }
            }
        }
        
        return dist[n-1][m-1];
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n,m; cin>>n>>m;
        vector<vector<int>> heights;
       
        for(int i=0; i<n; ++i){
            vector<int> temp;
            for(int j=0; j<m; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            heights.push_back(temp);
        }
       
        Solution obj;
        cout<<obj.MinimumEffort(heights)<<"\n";
    }
    return 0;
}
// } Driver Code Ends