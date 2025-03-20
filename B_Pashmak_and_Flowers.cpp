#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
vector<long long> arr(n);

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr.begin(),arr.end());
long long x=arr.back()-arr[0];
//cout<<x<<endl;
long long count1=0;
long long count2=0;
for (int i = 0; i < n; i++)
{
    if(arr[i]==arr[0]){
        count1++;
    }
    if(arr[i]==arr.back()){
        count2++;
    }
}
long long count=0;
if(arr[0]==arr.back()){
    count=(count1*(count1-1))/2;
}
else{
    count=count1*count2;
}
cout<<x<<" "<<count<<endl;


return 0;
}