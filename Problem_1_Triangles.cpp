#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("triangles.in", "r", stdin);
	//freopen("triangles.out", "w", stdout);
    long long n;
    cin >> n;

    vector<pair<long long, long long>> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
long long ans=-1;
    for (int i = 0; i < n; i++)
    {
        long long x1 = arr[i].first;
        
        long long y1 = arr[i].second;
        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[j].second == arr[i].second)
            {
                long long x2 = arr[j].first;
                for (int k = 0; k < n; k++)
                {

                    if(k!=j && k!=i && arr[k].first==arr[j].first ){
                        long long y2=arr[k].second;
                              long long area = (abs(x2-x1))*(abs(y2-y1));
                              ans=max(ans,area);
                    }
                }
            }
        }
    }

freopen("triangles.out", "w", stdout);
cout<<ans<<endl;
    return 0;
}