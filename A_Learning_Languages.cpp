#include <bits/stdc++.h>
using namespace std;

// BeginCodeSnip{DSU}
class DisjointSets {
  private:
	vector<int> parents;
	vector<int> sizes;

  public:
	DisjointSets(int size) : parents(size), sizes(size, 1) {
		for (int i = 0; i < size; i++) { parents[i] = i; }
	}

	/* the "representative" node in x's component */
	int find(int x) {
		return parents[x] == x ? x : (parents[x] = find(parents[x]));
	}

	/*whether the merge changed connectivity */
	bool unite(int x, int y) {
		int x_root = find(x);
		int y_root = find(y);
		if (x_root == y_root) { return false; }

		if (sizes[x_root] < sizes[y_root]) { swap(x_root, y_root); }
		sizes[x_root] += sizes[y_root];
		parents[y_root] = x_root;
		return true;
	}

	/*whether x and y are in the same connected component */
	bool connected(int x, int y) { return find(x) == find(y); }
};
// EndCodeSnip

int main() {
	long long n,m;
    cin>>n>>m;
    DisjointSets dsu(n);
    map<long long,vector<long long>> mp;
    for(int i=0;i<n;i++){
        long long k;
        cin>>k;
        for (int j = 0; j < k; j++)
        {
            long long x;
            cin>>x;
            mp[x].push_back(i);
                
        }
        
    }

    
     for (auto x:mp)
     {
        long long prv=-1;
        for (int i = 0; i <(x.second).size(); i++)
        {
                //cout<<(x.second)[i]<<" ";
            if(i>=1){
                dsu.unite(prv,((x.second)[i]));
            }
            prv=((x.second)[i]);
        }
        //cout<<endl;
     }
     

           long long count=0;
    for (int i = 0; i <n; i++)
    {
        if(dsu.find(i)==i){
           // cout<<"i="<<i<<endl;
            count++;
        }
    }
    if(mp.size()==0){
        count++;
    }
    cout<<(count-1)<<endl;
}