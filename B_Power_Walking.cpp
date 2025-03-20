#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
set<long long> st;
for (int i = 0; i <n; i++)
{
    long long x;
    cin>>x;
    st.insert(x);
}

long long dis=st.size();
for (int i = 1; i <=dis; i++)
{
    cout<<dis<<" ";
}
for (int i = dis+1; i <=n; i++)
{
    cout<<i<<" ";
}
cout<<endl;

}
return 0;
}