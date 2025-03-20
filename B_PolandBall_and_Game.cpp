#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,m;
cin>>n>>m;
vector<string> arr1(n);
vector<string> arr2(m);
for ( int i = 0; i < n; i++)
{
    cin>>arr1[i];
}
for ( int i = 0; i < m; i++)
{
    cin>>arr2[i];
}

long long count=0;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        if(arr1[i]==arr2[j]){
            count++;
        }
    }
    
}
//cout<<count<<endl;
long long p=n-count;
long long e=m-count;
if(count==0){
    if(p<=e){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}
if((count%2)!=0){
if(p<e){
    cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<pair<long long,long long>> arr;
for (int i = 0; i < n; i++)
{
    long long a,b;
    cin>>a>>b;
    arr.push_back({a,1});
    arr.push_back({b,-1});
}
sort(arr.begin(),arr.end());
long long sum=0;
long long ans=-1;
for (int i = 0; i < n; i++)
{
    sum=sum+arr[i].second;
    ans=max(ans,sum);
}

cout<<ans<<endl;
return 0;
}
}
else{
if(p<=e){
    cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

 
return 0;
}