#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;

vector<int> a(n);
for(auto &x:a){
    cin>>x;
}

int flag=0;
vector<pair<int,int>> ans;
for (int i = 0; i < 30*n; i++)
{
    auto it=min_element(a.begin(),a.end())-a.begin();
if(a[it]==1){
    flag=1;
    if(*max_element(a.begin(),a.end())==1){
        cout<<0<<endl;
        break;
    }
    else{
        cout<<-1<<endl;
        break;
    }
}
    for (int i = 0; i < n; i++)
    {
        if(a[i]==a[it]){
            continue;
            //cout<<"hi"<<endl;
        }
        else{
            if(a[i]%a[it]==0){
                a[i]=a[i]/a[it];
                ans.push_back({i,it});
               // cout<<"hiin"<<endl;
            }
            else{
                a[i]=a[i]/a[it];
                a[i]=a[i]+1;
                 ans.push_back({i,it});
                // cout<<"hiin1"<<endl;

            }
        }
    }
    
}
/*for(auto &x:a){
    cout<<x<<" ";
}
cout<<"a"<<endl;*/

if(flag!=1){
    cout<<ans.size()<<endl;
    for(auto &x:ans){
        cout<<x.first+1<<" "<<x.second+1<<endl;
    }
}

}
return 0;
}