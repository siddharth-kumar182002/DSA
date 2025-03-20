#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int arr[n];
int count=0;
int count1=0;

for (int i = 0; i < n; i++)
{
      cin>>arr[i];

      if(i%2==0 && arr[i]%2==1){
        count++;
      }
      if(i%2==1 && arr[i]%2==0){
        count1++;
      }
}

if(count==count1){
    cout<<count<<endl;
}
else{
    cout<<-1<<endl;
}


}
return 0;
}