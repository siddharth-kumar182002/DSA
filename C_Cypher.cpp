#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
//u->++
//d->--
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    string w;
    cin>>w;
    for (int j= 0; j< x ;j++)
    {
        if(w[j]=='D'){
            arr[i]++;
            if(arr[i]>9){
                arr[i]=0;
            }
        }
        else{
            arr[i]--;
            if(arr[i]<0){
                arr[i]=9;
            }
        }
    }
    
}
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;


}
return 0;
}