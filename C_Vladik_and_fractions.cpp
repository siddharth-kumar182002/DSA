//  ॐ नमः शिवाय //
#include <bits/stdc++.h>
#include <iomanip>
#define int int64_t
#define vi vector<int>
#define vii vector<pair<int, int>>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define pb push_back
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define vin(x, v)     \
    for (auto &x : v) \
        cin >> x;
#define vout(x, v)   \
    for (auto x : v) \
        cout << x << " ";
#define MEM(a, b) memset(a, (b), sizeof(a))
#define forl for (int i = 0; i < n; i++)
#define loop(i, j, k) for (int i = j; i < k; i += 1)
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)
#define MP make_pair
#define endl "\n"
#define INF (int)1e18
#define EPS 1e-18
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define MODD 998244353
#define isortarr(arr, n) sort(arr, arr + n)
#define dsortarr(arr, n) sort(arr, arr + n, greater<int>())
#define isortvect(v) sort(v.begin(), v.end())
#define dsortvect(v) sort(v.begin(), v.end(), greater<>());
#define isortstrng(str) sort(str.begin(), str.end())
#define dsortstrng(str) sort(str.begin(), str.end(), greater<char>())
#define ltransfr(str) transform(str.begin(), str.end(), str.begin(), ::tolower)
#define utransfr(str) transform(str.begin(), str.end(), str.begin(), ::toupper)
#define ct(x) cout << x
#define cn(x) cin >> x
#define deb(x) cout << #x << " = " << x << endl
#define debb(x, y) cout << #x << " = " << x << " , " << #y << " = " << y << endl
#define cp(t) \
    int t;    \
    cin >> t; \
    while (t--)
// srand(time(0));
// x = rand()%XYZ
//  cout<<fixed<<setprecision(15)<<
using namespace std;
int zero = 0;
int nxtn()
{
    int x;
    cin >> x;
    return x;
}

string nxts()
{
    string x;
    cin >> x;
    return x;
}

void printYesNo(bool f, string s1, string s2)
{
    if (f)
        cout << s1 << endl;
    else
        cout << s2 << endl;
}

int xpoweryMOD(int x, int y, int mod)
{
    int res = 1;
    if (x == 0)
        return 0;
    while (y)
    {
        if (y & 1)
            (res *= x) %= mod;
        y >>= 1;
        (x *= x) %= mod;
    }
    return res;
}

int func(int val, int x)
{
    int pw = xpoweryMOD(2, x, MODD);
    int ans = (val * pw) % MODD;
    return ans;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // cp(t)
    {
        int n;
        cin >> n;
        int ar[n];
        vi maxi(n, 0);
        forl
        {
            cin >> ar[i];
        }
        forl
        {
            for (int k = i; k < n; k += (i+1))
            {
                maxi[i] = max(maxi[i], ar[k]);
            }
            cout<<endl;
        }
        for(auto x:maxi){
              cout<<x<<" ";
            }
            cout<<endl;
        int sum = 0;
        dsortvect(maxi);
        for (int i = 0; i < n; i++)
        {
            sum = (sum + func(maxi[i], n - 1 - i)) % MODD;
            cout<<sum<<endl;
        }
        cout << sum << endl;
    }

    return 0;
}