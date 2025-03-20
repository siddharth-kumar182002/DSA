#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    //1 3 5 9 11 8 2 4 6 10 7
    //4----2 4 1 3
    //3----1
    //2-----1

    cout<<"i="<<n<<endl;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    arr[i]=i+1;
}
int f=0;
do
{
    f=0;
    for (int i = 1; i < n; i++)
    {
        if(abs(arr[i]-arr[i-1])>=2 && abs(arr[i]-arr[i-1])<=4){
            continue;
        }
        f=1;
          break;
    }
    if(f!=1){
        for(auto x:arr){
    cout<<x<<" ";
        }
        cout<<endl;
    }

    
} while (next_permutation(arr.begin(),arr.end()));

if(f!=0){
    cout<<-1<<endl;
    continue;
}
}
return 0;
}