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

vector<long long> div={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
vector<long long> ans(n);
long long maxi=-1;
set<long long> st;
for (int i = 0; i <n; i++)
{
    for (int j = 0; j < div.size(); j++)
    {
        if((arr[i]%div[j])==0){
            ans[i]=j+1;
            st.insert(ans[i]);
            break;
        }
    }
    
}

// for(auto x:st){
//     cout<<x<<" ";
// }
// cout<<endl;
long long count=0;
for(auto x: st){
    count++;
    for (int i = 0; i <n; i++)
    {
        if(ans[i]==x){
             ans[i]=count;
         }
    }
    
    
}



cout<<count<<endl;
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;


}
return 0;
}