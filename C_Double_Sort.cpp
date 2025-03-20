#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> a(n);
vector<int> b(n);
for(auto &x:a){
    cin>>x;
}
for(auto &x:b){
    cin>>x;
}
vector<pair<int,int>> ans;
auto l=a.end();
for (int i = 0; i < n; i++)
{
    auto it =max_element(a.begin(),l)-a.begin();
    l--;
    if(it==(n-i-1) || a[n-i-1]==a[it] ){
        continue;
    }
    else{
        swap(a[n-i-1],a[it]);
        ans.push_back({it,n-i-1});

    }

}

    /*for(auto x:ans){
    cout<<x.first<<" "<<x.second<<endl;
}
cout<<endl;*/
for (auto x:ans)
{
    swap(b[x.first],b[x.second]);

}

int flag=0;
auto l2=b.end();
for (int i = 0; i < n; i++)
{
     auto it2 =max_element(b.begin(),l2)-b.begin();
     l2--;
     //cout<<it2<<" "<<n-i-1<<endl;
      if(it2==(n-i-1) || b[n-i-1]==b[it2]){
     continue;
 }
 else{
    if(a[n-i-1]==a[it2]){
     swap(b[n-i-1],b[it2]);
     ans.push_back({it2,n-i-1});
    }
    else{
        flag=1;
        cout<<-1<<endl;
        break;
    }
 }
    
}

/*for(auto x:b){
    cout<<x<<" ";
}
cout<<endl;*/

if(flag!=1){
cout<<ans.size()<<endl;
    for(auto x:ans){
    cout<<x.first+1<<" "<<x.second+1<<endl;
}
    
}






}
return 0;
}