#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n,m;
    cin>>n>>m;
    vector <vector<char>> input(n,vector <char> (m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>input[i][j];
        }
    }
    vector <vector<int>> dp1(n+1,vector <int> (m+1,0));
    vector <vector<int>> dp2(n+1,vector <int> (m+1,0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            dp1[i+1][j+1]=dp1[i+1][j]+dp1[i][j+1]-dp1[i][j];
            dp2[i+1][j+1]=dp2[i+1][j]+dp2[i][j+1]-dp2[i][j];
            if(input[i][j]!='.') continue;
            if(i!=n-1 && input[i+1][j]=='.') dp1[i+1][j+1]++;
            if(j!=m-1 && input[i][j+1]=='.') dp2[i+1][j+1]++;
        }
    }


for (int i = 0; i <=n; i++)
{
    for (int j= 0; j <=m; j++)
    {
        cout<<dp1[i][j]<<" ";
    }
    cout<<endl;
    
}
cout<<endl;

    
    int q;
    cin>>q;
    for (int i = 0; i < q; i++) {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
		int ans = 0;
		ans += dp1[x2-1][y2] - dp1[x1-1][y2] - dp1[x2-1][y1-1] + dp1[x1-1][y1-1];
		ans += dp2[x2][y2-1] - dp2[x1-1][y2-1] - dp2[x2][y1-1] + dp2[x1-1][y1-1];
		cout<<ans<<endl;
    }
    return 0;
}