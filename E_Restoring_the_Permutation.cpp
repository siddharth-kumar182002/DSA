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
vector<long long> ch(n+1,0);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    ch[arr[i]]=1;
}
set<long long> rem;
for (int i = 1; i <=n; i++)
{
    if(ch[i]==0){
        rem.insert(i);
    }
}

vector<long long > mini;
vector<long long > maxi;
mini.push_back(arr[0]);
maxi.push_back(arr[0]);
auto it=rem.begin();
for ( int i = 1; i <n; i++)
{
    if(arr[i]==arr[i-1]){
        mini.push_back(*it);
        it++;
    }
    else{
        mini.push_back(arr[i]);
    }
}

for(auto x:mini){
    cout<<x<<" ";
}
cout<<endl;
for (int i = 1; i < n; i++)
{
    if(arr[i]==arr[i-1]){
       auto it1= rem.lower_bound(arr[i]);
       it1--;
      // cout<<"in="<<*it1<<endl;
       maxi.push_back(*it1);
       rem.erase(*it1);
    }
    else{
        maxi.push_back(arr[i]);
    }
}

for(auto x:maxi){
    cout<<x<<" ";
}
cout<<endl;


}
return 0;
}