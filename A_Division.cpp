#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long p, q;
        cin >> p >> q;

        if (p % q != 0)
        {
            cout << p << endl;
        }
        else
        {
            long long x = 1;
            for (long long i = 1; i <= sqrt(q); i++)
            {
                if (q % i == 0)
                {
                    long long pNew = p;
                    while (i != 1 && pNew % i == 0)
                    {
                        pNew /= i;

                        if (pNew % q != 0)
                        {
                            x = max(x, pNew);
                            break;
                        }
                    }

                    pNew = p;
                    while (pNew % (q / i) == 0)
                    {
                        pNew /= (q / i);

                        if (pNew % q != 0)
                        {
                            x = max(x, pNew);
                            break;
                        }
                    }
                }
            }
            cout << x << endl;
        }
    }
    return 0;
}