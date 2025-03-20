#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
set<long long> st;
for (int i = 1; i <=n; i++)
{
    st.insert(i);
}
vector<long long > rem;
for (int i = 0; i < n; i++)
{
    long long x;
    cin>>x;
    if(st.count(x)){
        st.erase(x);
    }
    else{
       rem.push_back(x);
    }
}
sort(rem.begin(),rem.end());

auto pr=st.begin();

int f=0;
for(auto x:rem){

if(*pr>(x-1)/2){
    f=1;
    break;
}
pr++;
}

if(f==1){
    cout<<-1<<endl;
}
else{
    cout<<rem.size()<<endl;
}

}
return 0;
}