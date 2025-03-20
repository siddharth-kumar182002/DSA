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
vector<long long> arr[n];
set<long long > s;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    arr[i].push_back(x);
    for (int j = 0; j < x; j++)
    {
        long long y;
        cin>>y;
        arr[i].push_back(y);
        s.insert(y);
    }
    
}

//cout<<(s.size())<<endl;
long long ans=-1;
set<long long> s2;

for (int i = 50; i >=1; i--)
{
   
    for (int j = 0; j < n; j++)
    {
         set<long long > s3=s2;
        if(arr[j][0]==i){
            for(int k=1;k<arr[j].size();k++){
                s3.insert(arr[j][k]);
            }
        }
        if(s3.size()==s.size()){
            continue;
        }
        else{
            s2=s3;
        }
        
    }
    
}

cout<<s2.size()<<endl;


}
return 0;
}