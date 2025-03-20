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
set<long long> st;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    st.insert(arr[i]);

}

if(st.size()>2){
    cout<<"No"<<endl;
    continue;
}
if(st.size()==1){
    cout<<"Yes"<<endl;
    continue;
}
sort(arr.begin(),arr.end());
long long a=0;
long long b=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]==arr[0]){
        a++;
    }
    else{
        b++;
    }
}

if(abs(b-a)<=1){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}
return 0;
}