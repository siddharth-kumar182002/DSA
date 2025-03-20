#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    string s;
    cin >> s;

    string v=" ";
    int ans = 0;
    int l = 0;
    int count = 0;
    int i = 0;
    
  /*  while (l < s.size())
    {
        l = l + i;
        if (l < s.size())
        {
            count++;
        }
        i++;
    }
    cout<<"l="<<l<<endl;
    cout<<"count"<<count<<endl;
*/
    for (int i = 0; i < s.size(); i++)
    {

        ans = ans + i;
        if(ans>=s.size()){
            break;
        }
       // cout<<ans<<endl;
        v.push_back(s[ans]);
        
    }
cout<<v<<endl;
    return 0;
}