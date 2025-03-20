#include <bits/stdc++.h>
using namespace std;

int minimumMultiplications(vector<int> &arr,
                               int start, int end)
    {
        //32768
        // Create a queue for storing the numbers as a result of multiplication
        // of the numbers in the array and the start number.
        queue<pair<int, int>> q;
        q.push({start, 0});

        // Create a dist array to store the no. of multiplications to reach
        // a particular number from the start number.
        vector<int> dist(32768, 1e9);
        dist[start] = 0;
        int mod = 32768;

        // Multiply the start no. with each of numbers in the arr
        // until we get the end no.
        while (!q.empty())
        {
            int node = q.front().first;
            int steps = q.front().second;
            q.pop();
               int ch=0;
            for (auto it : arr)
            {
                int num;
                if(ch==0){
                 num = (it+node) % mod;
                ch=1;
                }
                else{
                      num=(it*node)%mod;
                    ch=0;
                }

                // If the no. of multiplications are less than before
                // in order to reach a number, we update the dist array.
                if (steps + 1 < dist[num])
                {
                    dist[num] = steps + 1;

                    // Whenever we reach the end number
                    // return the calculated steps
                    if (num == end)
                        return steps + 1;
                    q.push({num, steps + 1});
                }
            }
        }
        // If the end no. is unattainable.
        return 0;
    }

int main()
{
    // Driver Code.
    int t;
    cin>>t;
    while(t--){
    int start;
    cin>>start;
    int end;
    end=0;

    vector<int> arr = {1,2};

if(start==0){
    cout<<0<<endl;
    continue;
}
    int ans = minimumMultiplications(arr, start, end);

    cout << ans<<" ";
    }
    return 0;
}