#include <iostream>
#include <vector>

using namespace std;

int main() {
	//freopen("bcount.in", "r", stdin);
	//freopen("bcount.out", "w", stdout);

	int cow_num;
	int query_num;
	cin >> cow_num >> query_num;

	vector<int> h(cow_num + 1);
	vector<int> g(cow_num + 1);
	vector<int> j(cow_num + 1);
   // cout<<holsteins[1]<<endl;
	for (int c = 0; c < cow_num; c++) {
		int t;
        cin>>t;
        h[c+1]=h[c];
        g[c+1]=g[c];
        j[c+1]=j[c];
        if(t==1){
            h[c+1]++;
        }
        else if(t==2){
            g[c+1]++;
        }
        else{
            j[c+1]++;
        }
	}
    /*for(auto &x:h){
        cout<<x<<" ";
    }
cout<<endl;*/
	for (int q = 0; q < query_num; q++) {
		int start;
		int end;
		cin >> start >> end;
		cout << h[end] - h[start - 1] << ' '
		     << g[end] - g[start - 1] << ' '
		     << j[end] - j[start - 1] << '\n';
	}
}