#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

//Set up the graph
int graph[11][11];

int main() {
    //ofstream fout("paintbarn.out");
    //ifstream fin("paintbarn.in");

    //Take inputs while also constructing the 2d difference matrix
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        int a,b,c,d;
        cin >>a>>b>>c>>d;
        a++;b++;c++;d++;
        graph[a][b]++;
        graph[c][d]++;
        graph[a][d]--;
        graph[c][b]--;
    }
    for (int i = 0; i < 11; i++)
    {
     for (int j = 0; j < 11; j++)
     {
        cout<<graph[i][j]<<" ";
     }
     cout<<endl;
        
    }
    cout<<"hehe"<<endl;

    //Recreate the original matrix from the 2d difference matrix
    //Add the tile to the answer if its sum equal k
    int ans = 0;
    for (int i = 1; i < 11; i++){
        for (int j = 1; j < 11; j++){
            graph[i][j] += graph[i-1][j]+graph[i][j-1]-graph[i-1][j-1];
            if (graph[i][j] == k) ans++;
        }
    }
for (int i = 0; i < 11; i++)
    {
     for (int j = 0; j < 11; j++)
     {
        cout<<graph[i][j]<<" ";
     }
     cout<<endl;
        
    }
    cout<<endl;
    //Output
    cout << ans;

    return 0;
}//