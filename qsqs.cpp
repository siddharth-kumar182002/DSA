#include<bits/stdc++.h>
using namespace std;

typedef long double ld;

#define REP(i, a, b) for(int i = a; i <= b; i++)
#define REPN(i, a) for(int i = 0; i < a; i++)
#define REPd(i, a, b) for(int i = a; i >= b; i--)
#define REPNd(i, a) for (int i = a; i >= 0; i--)

long long find_index(long long i, long long arr[], long long n){
    REPN(j, n){
        if(arr[j] == i){
            return j;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long arr[n];

        REPN(i, n){
            cin >> arr[i];
        }

        long long count = 0;
        REP(i, 1, k){
            if(find_index(i, arr, n) > k - 1){
                count++;
            }
        }  

        cout << count << '\n';  
        }
    }