#include <bits/stdc++.h>
using namespace std;
bool sortbysecdesc(const pair<int, int> &a,
                   const pair<int, int> &b)
{

    if (a.first != b.first)
    {
        if(a.first>b.first){
            return true;
        }
        else{
            return false;
        }
    }
    else
    {
        if(a.second<b.second){
            return true;
        }
        else{
            return false;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    int k;
    cin >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < t; i++)
    {
        int prb, pen;
        cin >> prb >> pen;
        v.push_back({prb, pen});
    }
    sort(v.begin(), v.end(), sortbysecdesc);

   /*for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }*/
    int ans = 0;
    for (int i = 0; i < t; i++)
    {
        if (v[k-1] == v[i])
        {
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}