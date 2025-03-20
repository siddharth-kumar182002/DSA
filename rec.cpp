#include <bits/stdc++.h>
using namespace std;
void solve(int index, int n, int k, vector<vector<int>> ans, vector<int> ds, int arr[])
{
    if (ds.size() == k)
{
    
    cout<<ds[0]<<" "<<ds[1]<<endl;
    return;
}
    if ((index) == n)
    {
        return;
    }
    
    for (int i = index; i < n; i++)
    {
        ds.push_back(arr[i]);
        solve(index + 1, n, k, ans, ds, arr);
        ds.pop_back();
    }
}
int main()
{

    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    vector<vector<int>> ans;
    vector<int> ds;
    solve(0, n, k, ans, ds, arr);
    //cout << arr[2]<<endl;
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " " << endl;
        }
    }

    return 0;
}