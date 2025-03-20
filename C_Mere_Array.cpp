#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
vector<long long> ch(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    ch[i]=arr[i];
}

long long mini=*min_element(arr.begin(),arr.end());
sort(ch.begin(),ch.end());
int f=0;
for (int i = 0; i < n; i++)
{
    if(ch[i]!=arr[i]){
         if(arr[i]%mini!=0){
            f=1;
            cout<<"NO"<<endl;
            break;
         }
    }
}
if(f!=1){
    cout<<"YES"<<endl;
}


}
return 0;
}