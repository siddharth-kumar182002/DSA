#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int lo = 1;
        int hi = n;
        int flag = 0;
        int minm = 1;
        int maxm = n;
        int lo1;
        int hi1;

        for (int i = 1; i <= n; i++)
        {
            if (lo >= hi)
            {
                cout<<-1<<endl;

                break;
            }
            lo1=lo;
            hi1=hi;

            if (arr[lo] == minm || arr[lo] == maxm)
            {
                //cout<<"loin"<<endl;
                if (arr[lo] == minm)
                {
                    minm = minm + 1;
                }
                else
                {
                    maxm = maxm - 1;
                }
                lo++;
            }
           if (arr[hi] == minm || arr[hi] == maxm)
            {
                if (arr[hi] == minm)
                {
                    minm = minm + 1;
                }
                else
                {
                    maxm = maxm - 1;
                }
                hi--;
            }
           // cout<<"min"<<minm<<" "<<maxm<<endl;
 //cout <<"inside" <<lo << " " << hi << endl;
            if(lo==lo1 && hi==hi1){
                cout << lo << " " << hi << endl;
                break;
            }
            
        }

    
    }
    return 0;
}