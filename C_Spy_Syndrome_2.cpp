#include <bits/stdc++.h>
using namespace std;
const int d = 29;
const long long mod = 1110111110111;

long long hashvalue(string temp)
{
    long long hash = 0;
    for (long long i = (temp.size() - 1); i >= 0; i--)
    {
        if ( temp[i]>=65 && temp[i] <= 90)
        {
            temp[i] = temp[i] + 32;
        }

        hash = (hash * d + temp[i]) % mod;
        if (hash < 0)
        {
            hash = (hash + mod);
        }
    }
    return hash;
}
int main()
{
    long long l;
    cin >> l;
    string s;
    cin >> s;
    long long t;
    cin >> t;
    string temp;
    unordered_map<long long, string> se;
    for (long long i = 0; i < t; i++)
    {
        cin >> temp;
        se[hashvalue(temp)] = temp;
    }

    long long hash = 0;
    long long count = 0;
    for (long long i = 0; i < l; i++)
    {
        hash = (hash * d + s[i]) % mod;
        if (hash < 0)
        {
            hash = (hash + mod);
        }
        count++;
        if (se.find(hash) != se.end() && (se[hash].size() == count))
        {
            auto it = se.find(hash);
            cout << it->second << " ";
            hash = 0;
            count = 0;
        }
    }

    return 0;
}