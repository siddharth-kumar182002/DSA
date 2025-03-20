#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,c,d;
cin>>n>>c>>d;
multiset<long long> st;
for (int i = 0; i <n*n; i++)
{
    long long x;
    cin>>x;
    st.insert(x);

}


// for(auto x:arr){
//     cout<<x<<" ";
// }
// cout<<endl;
long long f=0;
long long start=*(st.begin());
for (int i = 0; i <n; i++)
{
    long long y=start+i*c;
    for (int j = 0; j < n; j++)
    {
        long long x=y+j*d;
    
        auto it=st.lower_bound(x);
          //  cout<<*(it)<<endl;
            if(*(it)!=x){
                f=1;
                break;
            }
            else{
                st.erase(st.find(x));
            }
       
    }
    if(f==1){
        break;
    }
    
    
}

if(f==1){
    cout<<"NO"<<endl;
}
else{
    cout<<"YES"<<endl;
}
}
return 0;
}