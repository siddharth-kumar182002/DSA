#include <bits/stdc++.h>
using namespace std;
int main() {
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

if(arr[n-2]>arr[n-1]){
    cout<<-1<<endl;
}
else{
    if(arr[n-1]<0){
        if(is_sorted(arr.begin(),arr.end())){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<n-2<<endl;
        for (int i = n-2; i>=1; i--)
        {
            cout<<i<<" "<<n-1<<" "<<n<<endl;
        }
        
    }
}
}
return 0;
}