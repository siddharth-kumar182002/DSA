#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr(n);
string s;
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
cin>>s;
vector<long long> b;
vector<long long> r;
for (int i = 0; i < n; i++)
{
    if(s[i]=='B'){
        b.push_back(arr[i]);
    }
    else{
        r.push_back(arr[i]);
    }
}
sort(b.begin(),b.end());
sort(r.begin(),r.end());
long long ch=0;
for (int i = 1; i <=n; i++)
{
    if(i<=b.size()){
         if(b[i-1]<i){
            ch=1;
            break;
         }
    }
    else{
        if(r[i-b.size()-1]>i){
            ch=1;
            break;
        }

    }
   // cout<<i<<endl;
}
if(ch==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}

}
return 0;
}