#include <bits/stdc++.h>
using namespace std;

vector<pair<long long,long long >> p;
bool func(long long s,vector<long long> &arr,long long n){
    p.clear();
    multiset<long long> m;
    for (int i = 0; i < 2*n; i++)
    {
        m.insert(arr[i]);
    }
    while(m.size()){
        int curr = *m.rbegin();
		m.erase(m.find(curr));
		if (m.find(s - curr) == m.end()) {
			return false;
		}
		m.erase(m.find(s - curr));
		p.push_back({curr, s - curr});
		s = curr;
    }
   // cout<<"hi"<<endl;
        return true;
    
     
}
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr;
for (int i = 0; i < 2*n; i++)
{
    long long temp;
    cin>>temp;
    arr.push_back(temp);
}
sort(arr.begin(),arr.end());
int f=0;
for (int i = 0; i < 2*n-1; i++)
{
    long long init=arr[(2*n)-1]+arr[i];
    //cout<<init<<endl;
    //cout<<"func="<<func(init,arr,n)<<endl;
    if(func(init,arr,n)){
       // cout<<"hi"<<endl;
      // cout<<init<<endl;
        cout<<"YES"<<endl;
         cout<<init<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        
        f=1;
        break;
    }
}
if(f!=1){
    cout<<"NO"<<endl;
}

}
return 0;
}