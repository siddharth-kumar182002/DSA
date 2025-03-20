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
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
long long k=0;
vector<long long> ans;
long long ch=0;
while(k<=40){

long long sum=0;
set<long long> st;
st.clear();
for (int i = 0; i < n; i++)
{
    st.insert(arr[i]);
}
for(auto x:st){
    sum=sum+x;
}
long long tot=st.size();
long long avg=sum/tot;
sum=0;
ans.push_back(avg);
for (int i = 0; i < n; i++)
{
    arr[i]=abs(arr[i]-avg);
    //cout<<arr[i]<<" ";
    sum=sum+arr[i];
}
// cout<<endl;
if(sum==0){
    ch=1;
    break;
}
k++;
}

if(ch==1){
    cout<<ans.size()<<endl;
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}
else{
    cout<<-1<<endl;
}



}
return 0;
}