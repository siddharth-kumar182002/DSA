#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int array[n];

    
    int k = n;
    while(k--)
    {

        cin >> array[k - 1];
        cout << array[k - 1] << " ";
        // cout << n << endl;
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << array[i] << " " ;
    }
    cout << endl;
    int count = 0;
    for(int i = 0; i < n-1; i++)
    {
        /*cout << "e" << endl;
        cout << i << endl;
        cout << count << endl;
        */
        if (array[i] != array[i + 1])
        {
            count=count+1;
            cout << count << endl;
        }
        
        

    }
    cout<<"final " << count<<endl;
    

    

    return 0;
}