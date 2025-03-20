// C++ program to demonstrate the 
// ordered set in GNU C++ 
#include <iostream> 
using namespace std; 

// Header files, namespaces, 
// macros as defined above 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

long long f(map<long long,long long> &m,long long n){
    long long ans=0;
    ordered_set st;
    for (int i = 1; i <=n; i++)
    {
        st.insert(i);
    }

    for (int i = 1; i <=n; i++)
    {
        int x=m[i];
       // cout<<"x="<<x<<endl;
      ans=ans+st.order_of_key(x);
      //cout<<ans<<endl;
        if (st.find(x) != st.end()) 
        st.erase(st.find(x)); 

    }
    return ans;

    
}
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
vector<long long> brr(n);
map<long long,long long> mp;
map<long long,long long> hp;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    cin>>brr[i];
}
for (int i = 0; i < n; i++)
{
    mp[arr[i]]=brr[i];
    hp[brr[i]]=arr[i];
}

long long a=f(mp,n);
long long b=f(hp,n);

if(a<=b){
    for (int i = 1; i <=n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for (int i = 1; i <=n; i++)
    {
        cout<<mp[i]<<" ";
    }
    cout<<endl;
}
else{
     for (int i = 1; i <=n; i++)
    {
        cout<<hp[i]<<" ";
    }
    cout<<endl;
     for (int i = 1; i <=n; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}



}
return 0;
}