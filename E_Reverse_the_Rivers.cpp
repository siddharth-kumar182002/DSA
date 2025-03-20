#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,k,q;
cin>>n>>k>>q;
vector<vector<long long>> arr(n,vector<long long> (k));
for (int i = 0; i < n; i++)
{
    for (int j = 0; j<k; j++)
    {
        cin>>arr[i][j];
        if(i!=0){
            arr[i][j]=arr[i][j]|arr[i-1][j];
        }
    }
}
vector<vector<long long>> brr(k);

for(int j=0;j<k;j++){
    for(int i=0;i<n;i++){
        //cout<<arr[i][j]<<" ";
        brr[j].push_back(arr[i][j]);
    }
  // cout<<endl;
}
// for(int j=0;j<k;j++){
//     for(int i=0;i<n;i++){
//        cout<<brr[j][i]<<" ";
//     }
//     cout<<endl;
// }
while(q--){
    long long m;
    cin>>m;
    long long L=0;
    long long E=n-1;
    while(m--){
   long long c;
    char x;
    long long v;
    cin>>c>>x>>v;
    c--;
    if(x=='>'){
        long long it=upper_bound(brr[c].begin(),brr[c].end(),v)-brr[c].begin();
       // cout<<it<<endl;
        L=max(L,it);
    }
    else{
          long long it=lower_bound(brr[c].begin(),brr[c].end(),v)-brr[c].begin();
          it--;
          E=min(E,it);
    }
    //cout<<"L="<<L<<endl;
    //cout<<"E="<<E<<endl;
    }
    if(L<=E){
        cout<<(L+1)<<endl;
    }
    else{
        cout<<-1<<endl;
    }
 
}

return 0;
}