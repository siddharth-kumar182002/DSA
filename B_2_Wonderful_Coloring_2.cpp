#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k;
cin>>n>>k;
vector<long long> arr(n);

map<long long,vector<long long>> mp;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        mp[arr[i]].push_back(i);
    }
    vector<long long> ans(n,0);
    long long temp=1;
    long long num=0;
for(auto x : mp){
    if((x.second).size()>=k){
       for (int i = 0; i <k; i++)
       {
            ans[x.second[i]]=i+1;
       }
       
    }
    else{
            for (int i = 0; i <(x.second).size(); i++)
       {
            ans[x.second[i]]=temp;
            temp++;
            if(temp>k){
                temp=1;
            }
            num++;
       }
    }
}
/*
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;*/
if((num%k)!=0){
    long long m=num%k;

    for (auto i = mp.rbegin(); i !=mp.rend() ; i++)
    {
        if((i->second).size()<k){
            for (int j = (i->second).size()-1; j >=0; j--)
            {
                ans[(i->second)[j]]=0;
                m--;
                if(m==0){
                    break;
                }
            }
            
        }
        if(m==0){
            break;
        }
    }
    
}

for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;


    
}
return 0;
}