#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int maxl = -1;
        int count;
        int j;
        int flag=0;
        for (int i = 0; i < s.size(); )
        {
            count = 0;
            if (s[i] == 'L')
            {
                flag=1;

                for (j = i; j < s.size(); j++)
                {
                    if (s[j] != 'L')
                    {
                        break;
                    }
                    else
                    {
                        count++;
                    }
                  //  cout<<"incount="<<count<<" ";
                }
                
                maxl = max(maxl, count);
                //cout<<"inmaxl="<<maxl<<" ";
            }

            if(count==0){
                i++;
            }
            else{
                i=j;
                //cout<<"j="<<j<<endl;
            }



        }
        if (flag == 0)
        {
            cout << 1<< endl;
        }
        else
        {

            cout << (maxl + 1) << endl;
        }
    }
    return 0;
}