#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<long long > arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];

}

vector<long long> lis;
lis.push_back(arr[0]);
for (int i = 1; i < n; i++)
{
   long long ind=lower_bound(lis.begin(),lis.end(),arr[i])-lis.begin();
   /*cout<<"ind="<<ind<<endl;
   for(auto x:lis){
    cout<<x<<" ";
   }
   cout<<endl;*/
   if(ind==lis.size()){
    lis.push_back(arr[i]);
   }
   else{
    lis[ind]=arr[i];
   }

}
cout<<lis.size()<<endl;


return 0; 
}