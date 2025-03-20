#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string s;
cin>>s;
vector<long long> arr;
long long n=s.size();
for (int i = 0; i < n; i++)
{
    if(s[i]=='o'){


        if(s[i+1]=='n' && s[i+2]=='e' && i+2<s.size()){
         if(s[i-2]=='t' && s[i-1]=='w' && i-2>=0){
            arr.push_back(i+1);
            s[i]='?';
            continue;
        }
        }
        
    }
}
for (int i = 0; i < n; i++)
{
    if(s[i]=='n' && s[i-1]=='o' && s[i+1]=='e' && i>=0 &&i<n){
        arr.push_back(i+1);
    }
    if(s[i]=='w' && s[i-1]=='t' && s[i+1]=='o' && i>=0 &&i<n){
        arr.push_back(i+1);
    }
}

cout<<arr.size()<<endl;
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;



}
return 0;
}