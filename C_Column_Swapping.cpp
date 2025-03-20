#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
vector<long long> ans;
long long a=-1;
long long b=-1;
long long f=0;
vector<long long> arr;
set<pair<long long,long long>> st;
vector<vector<long long> > wrr(n);
for (int i = 0; i < n; i++)
{
   // cout<<"i="<<i<<endl;
    arr.clear();
    for (int j = 0; j < m; j++)
    {
        long long x;
        cin>>x;
        wrr[i].push_back(x);
        arr.push_back(x);
    }
    //cout<<arr.size()<<endl;
    vector<long long > temp;
    temp=arr;
    sort(temp.begin(),temp.end());
    ans.clear();
    for (int j = 0; j < m; j++)
    {
        if(temp[j]!=arr[j]){
            ans.push_back(j+1);
        }
    }
    if(ans.size()>2){
        f=1;
    }
    else{
        if(ans.size()!=0){
            st.insert({ans[0],ans[1]});
        }

    }
}

if(f==1){
    cout<<-1<<endl;
}
else{
    if(st.size()>1){
        cout<<-1<<endl;
    }
    else if(st.size()==1){
        auto it=*st.begin();
        long long a=it.first;
        long long b=it.second;
        long long count=0;
        //cout<<"A="<<a<<endl;
       // cout<<"b="<<b<<endl;
        for (int i = 0; i < n; i++)
        {
              if(wrr[i][a-1]<wrr[i][b-1]){
                  count++;
              }
        }
     //   cout<<count<<endl;
        if(count>=1){
            cout<<-1<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }
    }
    else{
        cout<<1<<" "<<1<<endl;
    }
}
}
return 0;
}