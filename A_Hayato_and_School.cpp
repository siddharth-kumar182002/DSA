#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
long long temp;
long long arr[n+1];
vector<pair<long long,long long>> odd;
vector<pair<long long,long long>> even;
for (long long i = 1; i <=n; i++)
{
    cin>>arr[i];
    if(arr[i]%2==0){
even.push_back({arr[i],i});
    }
    else{
        odd.push_back({arr[i],i});
    }
}



if(odd.size()==0 || (odd.size()==2 && even.size()==1)){
    cout<<"NO"<<endl;
}
else{
     if(odd.size() >= 3){
         cout<<"YES"<<endl;
cout<<odd[0].second<<" "<<odd[1].second<<" "<<odd[2].second<<endl;

    }
    else {
          cout<<"YES"<<endl;
        //   if(even.size())
        cout<<even[0].second<<" "<<even[1].second<<" "<<odd[0].second<<endl;
}
}







}
return 0;
}