#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr(n);

long long odd=0;
long long even=0;

long long ans1=0;
long long ans2=0;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]&1){
        ans1=ans1+abs(i-2*odd);
        odd++;
    }
    else{
         ans2=ans2+abs(i-2*even);
         even++;
    }
}
if(abs(odd-even)>1){
    cout<<-1<<endl;
}
else{
    if(odd>even){
        cout<<ans1<<endl;
    }
    else if(even>odd){
        cout<<ans2<<endl;
    }
    else{
        cout<<min(ans1,ans2)<<endl;
    }
}



}
return 0;
}