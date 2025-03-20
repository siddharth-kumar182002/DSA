#include <bits/stdc++.h>
using namespace std;
long long dis(pair<long long,long long > &p,long long i,long long j){
    return (abs(p.first-i)+abs(p.second-j));
}
int main() {
int t;
cin>>t;
while(t--){
long long  r,c;
cin>>r>>c;
vector<long long > ans;
if(int(r)%(2)==0 && int(c)%2==0){
pair<long long ,long long > c1={r/2,c/2};
pair<long long ,long long > c2={r/2+1,c/2+1};
pair<long long ,long long > c3={r/2+1,c/2};
pair<long long ,long long > c4={r/2,c/2+1};
long long a=max({dis(c1,r,c),dis(c2,r,c),dis(c3,r,c),dis(c4,r,c)});
for (long long i = 1; i <=r; i++)
{
    for (long long j = 1; j <=c; j++)
    {
        long long mini=min({dis(c1,i,j),dis(c2,i,j),dis(c3,i,j),dis(c4,i,j)});
        ans.push_back(mini+a);
    }
    
}


}
else if(int(r)%(2)!=0 && int(c)%2==0){
pair<long long ,long long > c1={r/2+1,c/2};
pair<long long ,long long > c2={r/2+1,c/2+1};
long long a=max({dis(c1,r,c),dis(c2,r,c)});
for (long long i = 1; i <=r; i++)
{
    for (long long j = 1; j <=c; j++)
    {
        long long mini=min({dis(c1,i,j),dis(c2,i,j)});
       
        ans.push_back(mini+a);
    }
    
}
}
else if(int(r)%(2)==0 && int(c)%2!=0){
pair<long long ,long long > c1={r/2,c/2+1};
pair<long long ,long long > c2={r/2+1,c/2+1};
long long a=max(dis(c1,r,c),dis(c2,r,c));
for (long long i = 1; i <=r; i++)
{
    for (long long j = 1; j <=c; j++)
    {
        long long mini=min({dis(c1,i,j),dis(c2,i,j)});
        //cout<<"i="<<i<<"j="<<j<<endl;
       // cout<<c1.first<<" "<<c1.second<<endl;
        //cout<<"dis"<<dis(c1,i,j)<<endl;
        ans.push_back(mini+a);
        
    }
    
}
}
else{
pair<long long ,long long > c1={r/2+1,c/2+1};
long long a=max({dis(c1,r,c)});
for (long long i = 1; i <=r; i++)
{
    for (long long j = 1; j <=c; j++)
    {
        long long mini=min({dis(c1,i,j)});
        ans.push_back(mini+a);
    }
    
}

}
sort(ans.begin(),ans.end());
for(auto x:ans){
    cout<<x<<" ";
}
cout<<endl;

}
return 0;
}