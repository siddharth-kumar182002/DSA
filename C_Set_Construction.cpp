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
vector<long long> subsets[n+1];

for (int i = 1; i <=n; i++)
{
    string x;
    cin>>x;
    for (int j = 1; j <=n; j++)
    {
        if(x[j-1]=='1'){
            subsets[j].push_back(i);
        }
    }
    
}

   set<int> setValues[n+1];
      int curr = 1, sz = 0;
      while(curr != n + 1){
         for(int i=1;i<n+1;i++){
            if(subsets[i].size() == sz){
               setValues[i].insert(curr++);
            for(int set: subsets[i]){
               setValues[i].insert(setValues[set].begin(), setValues[set].end());
               }
            }
         }
         sz++;
      }
      for(int i=1; i<n+1;i++){
         cout << setValues[i].size() << ' ';
         for(int val: setValues[i]) cout << val << ' ';
         cout << '\n';
      }



}
return 0;
}