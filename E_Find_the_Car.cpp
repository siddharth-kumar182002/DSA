#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,k,q;
cin>>n>>k>>q;
vector<long long> dist(k+1);
vector<long long> time(k+1);
dist[0]=0;
time[0]=0;
for (int i = 1; i <=k; i++)
{
    cin>>dist[i];
}
for (int i = 1; i <=k; i++)
{
    cin>>time[i];
}

while(q--){
    long long d;
    cin>>d;
    long long it=upper_bound(dist.begin(),dist.end(),d)-dist.begin();
    it--;
    //cout<<"it="<<it<<endl;
    if(dist[it]==d){
        cout<<(time[it])<<" ";
        continue;
    }
    long long  a,b,c,e;
     a=dist[it];
     b=time[it];
     c=dist[it+1];
     e=time[it+1];
    
    double speed=(c-a)/((double)(e-b));
    //cout<<"speed="<<speed<<endl;
    long long rem=(d-a);
    double remt=rem/(speed);

    //remt=remt+b;
    //cout<<"rem="<<remt<<endl;
    long long ans=llround((double)b+(remt));
    cout<<ans<<" ";

}
cout<<endl;

}
return 0;
}