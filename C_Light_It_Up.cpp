#include <bits/stdc++.h>
using namespace std;


typedef int ll;

class Hash {
  private:
	map<tuple<int,int,int>,int>hash_table;
  public:
	Hash () {}
	int hash(int x){
		return hash({x,0,0});
	}
	int hash(tuple<int,int>x){
		return hash({get<0>(x),get<1>(x),0});
	}
	int hash(tuple<int,int,int>x){
		if(hash_table.find(x)!=hash_table.end())
			return hash_table[x];
		int new_hash = hash_table.size();
		hash_table[x]=new_hash;
		return new_hash;
	}
};

class Graph {

	bool is_directed;

	public:
		vector<vector<pair<int,ll>>>adj;
    	int n,N=5000000;
    	Hash h;

		Graph(int n_, bool is_directed_ = true){
			n=n_; is_directed = is_directed_;
			adj.resize(N,vector<pair<int,ll>>());
		}

		int hash(int u, int v){
			return h.hash({u,v});
		}
		int hash(int u, int v, int k){
			return h.hash({u,v,k});
		}

		void add_edge(int uR, int vR, ll c=0){
		  int u=h.hash(uR), v=h.hash(vR);
		  add_edge_internal(u,v,c);
		}
		void add_edge(tuple<int,int> uR, tuple<int,int> vR, ll c=0){
		  int u=h.hash(uR), v=h.hash(vR);
		  add_edge_internal(u,v,c);
		}
		void add_edge(tuple<int,int,int> uR, tuple<int,int,int> vR, ll c=0){
		  int u=h.hash(uR), v=h.hash(vR);
		  add_edge_internal(u,v,c);
		}


	private :

	  void add_edge_internal(int u, int v, ll c=0){
			add_edge_weighted_undirected(u,v,c);
			if(!is_directed)
				add_edge_weighted_undirected(v,u,c);
		}
		void add_edge_weighted_undirected(int u, int v, ll c) {
			pair<int,ll>p = make_pair(v,c);
			adj[u].push_back(p);
		}

};

class BFS {
    vector<ll>min_dist_from_source;
    vector<bool> visited;
    Graph *g;

    public:
      BFS(Graph *g_) {
          g = g_;
          clear();
      }

	  	void clear() {
  			min_dist_from_source.clear();
  			min_dist_from_source.resize(g->N,-1);
  			visited.clear();
  			visited.resize(g->N, false);
  		}


      void run(int sourceR) {
        int source = (g->h).hash(sourceR);
        run_internal(source);
      }
      void run(tuple<int,int> sourceR) {
        int source = (g->h).hash(sourceR);
        run_internal(source);
      }
      void run(tuple<int,int,int> sourceR) {
        int source = (g->h).hash(sourceR);
        run_internal(source);
      }


      int min_dist(int targetR){
      	int target = (g->h).hash(targetR);
      	return min_dist_internal(target);
      }
      int min_dist(tuple<int,int> targetR){
      	int target = (g->h).hash(targetR);
      	return min_dist_internal(target);
      }
      int min_dist(tuple<int,int,int> targetR){
      	int target = (g->h).hash(targetR);
      	return min_dist_internal(target);
      }

      bool is_visited(int targetR){
      	int target = (g->h).hash(targetR);
      	return is_visited_internal(target);
      }
      bool is_visited(tuple<int,int> targetR){
      	int target = (g->h).hash(targetR);
      	return is_visited_internal(target);
      }
      bool is_visited(tuple<int,int,int> targetR){
      	int target = (g->h).hash(targetR);
      	return is_visited_internal(target);
      }

  private:
    void run_internal(int source) {
			queue<int> q;
			q.push(source);

			visited[source] = true;
			min_dist_from_source[source] = 0;

			while(!q.empty()) {
				int cur_node = q.front();
				for (unsigned int i = 0; i < (g->adj[cur_node]).size(); ++i) {
					int adj_node =  (g->adj[cur_node])[i].first;
					if (visited[adj_node] == false) {
						visited[adj_node] = true;
						min_dist_from_source[adj_node] = min_dist_from_source[cur_node] + 1;
						q.push(adj_node);
					}
				}
				q.pop();
			}

			return;
    }

    int min_dist_internal(int target){
    	return min_dist_from_source[target];
    }

    bool is_visited_internal(int target){
    	return visited[target];
    }

};
  
  
bool isValid(int i,int j,int n,int m,vector<vector<char>>&grid)
{
  if(i>=0 && j>=0 && j<m && i<n && grid[i][j]=='.')return true;
  return false;
}

void solve()
{
	int n,m;
	cin>>n>>m;
	vector<vector<char>>grid(n,vector<char>(m,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
		   cin>>grid[i][j];
		}
	}
	Graph g1(n*m,true);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
		   if(grid[i][j]=='.'){
		     if(isValid(i+1,j,n,m,grid)){
		       g1.add_edge({i,j},{i+1,j});
		     }
		      if(isValid(i-1,j,n,m,grid)){
		       g1.add_edge({i,j},{i-1,j});
		     }
		      if(isValid(i,j+1,n,m,grid)){
		       g1.add_edge({i,j},{i,j+1});
		     }
		      if(isValid(i,j-1,n,m,grid)){
		       g1.add_edge({i,j},{i,j-1});
		     }
		   }
		}
	}
	
	BFS bfs(&g1);
	int cnt=0;
		for(int i=0;i<n;i++)
		{
		  for(int j=0;j<m;j++)
		  {
		    if(grid[i][j]=='.' && bfs.is_visited({i,j})==false){
		      bfs.run({i,j});
		      cnt++;
		    }
		  }
		}
		cout<<cnt;
}


int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t=1;
	// cin>>t;
	while(t--)
	{
        solve();
	}	
}
