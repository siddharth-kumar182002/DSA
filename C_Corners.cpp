#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        string arr[r];
        int ans=0;
        for (int i = 0; i < r; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < r; i++)
        {
            ans=ans+count(arr[i].begin(),arr[i].end(),'1');
        }
        // cout<<"ans"<<ans<<endl;
        if(ans==r*c){
            cout<<ans-2<<endl;
        }
        else{
            //cout << "Test " << endl;

        
        

        
        int x=0;
        // int count = 0;
        for (int i = 0; i < r; i++)
        {
             for (int j = 0; j < c; j++)
             {
                //  count++;
                //  cout << "Count " <<count << endl;
                if(arr[i].at(j)=='0'){
                    if(( (j+1< c) && arr[i].at(j+1)=='0') || (i+1<r && arr[i+1].at(j)=='0') || (i+1<r && j + 1 < c && arr[i+1].at(j+1)=='0' || (j-1 >=0 && i + 1 < r && arr[i+1].at(j-1) == '0'))){
                        //  cout << "OK " << endl;
                         x=x+1;
                        break;
                    }
                }
             }
             if(x==1){
                break;
             }
             
        }
        // cout<<"x"<<x<<endl;

        if(x==1){
            cout<<ans<<endl;
        }
        else{
            cout<<ans-1<<endl;
        }
        
    }
        
    }
    // cout<< "Test 2" << endl;
    return 0;
}