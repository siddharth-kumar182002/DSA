#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
 int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;

        priority_queue<pair<int,int>>q;
        int ans = 0;

        for (int i = 1;i<=n;i++){
            int a;
            cin>>a;
            q.push({a,i});
        }

        vector<pair<int,int>>ret;

        while ((int)q.size() >= 2){

            int best1 = q.top().first,pos1 = q.top().second;
            q.pop();
            int best2 = q.top().first,pos2 = q.top().second;
            q.pop();

            if (best1 >= 1 and best2 >= 1){
                q.push({best1 - 1,pos1});
                q.push({best2 - 1,pos2});
                ret.push_back({pos1,pos2});
                ans++;
            }
        }
        
        cout<<ans<<endl;

        for (auto it:ret)cout<<it.first<<" "<<it.second<<endl;
    }
return 0;
}