#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int days =0;
    int count = 0;
    vector<int> res;

    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back({temp, i+1});
    }

    sort(v.begin(), v.end());

for (int i = 0; i <n; i++)
{
    days=days+v[i].first;
    if(days<=k){
        count++;
        res.push_back(v[i].second);

    }
}
cout<<count<<endl;

for(auto x:res){
    cout<<x<<" ";
}

    return 0;
}