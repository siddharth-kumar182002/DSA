#include <bits/stdc++.h>
using namespace std;
#define d 257
#define q 1000000007
int main()
{
    string s;
    string bad;
    cin >> s >> bad;
    int k;
    cin >> k;
    set<int> se;
   // cout<<(s[0] - 'a')<<endl;
  /* int badcount = 0;
   for(int i=0;i<s.length();i++){
    if (bad[(s[i] - 'a')] == '0')
{
    badcount++;
}
   }
   cout<<badcount<<endl;*/
   for (int i = 0; i < s.length(); i++)
    {
        int hash = 0;
        int badcount = 0;
        // int power=1;

        for (int j = i; j < s.length(); j++)
        {
            if (bad[(s[j] - 'a')] == '0')
            {
                badcount++;
                //cout<<badcount<<" bad"<<endl;
            }
            if (badcount > k)
            {
                break;
            }
            else
            {
                hash = (hash * d + s[j]) % q;
                //cout<<hash<<" "<<i<<" "<<endl;
                se.insert(hash);
            }
        }
    }

    cout<<se.size()<<endl;

    return 0;
}