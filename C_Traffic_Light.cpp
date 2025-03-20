#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s;
        cin >> s;
        string trf;
        cin >> trf;
        vector<int> v;
        vector<int> g;
        for (int i = 0; i < n; i++)
        {
            if (trf[i] == s)
            {
                v.push_back(i);
            }
            if (trf[i] == 'g')
            {
                g.push_back(i);
            }
        }
       /* for (auto i : g)
        {
            cout<<i<<" ";
        }*/
        
int ans=0;
        for (int i = 0; i < v.size(); i++)
        {
            int flag = 0;
            for (int j = 0; j < g.size(); j++)
            {
                if (g[j] >= v[i])
                {
                    
                    ans=max(ans,g[j]-v[i]);
                    flag = 1;
                    break;
                }
            }
            if(flag==0){
                ans=max(ans,(n-v[i]+g[0]));
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}