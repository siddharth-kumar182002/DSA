#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
vector<long long> arr(3);
for (int i = 0; i < 3; i++)
{
    cin>>arr[i];
}

sort(arr.begin(),arr.end());
long long a=arr[0];
long long f=0;
long long m=0;
for (int i = 1; i <3; i++)
{
    if(arr[i]%a!=0){
        cout<<"NO"<<endl;
        f=1;
        break;
    }
    else{
        while(arr[i]!=a){
            arr[i]-=a;
            m++;
            if(m>3){
                cout<<"NO"<<endl;
                f=1;
                break;
            }
        }
        if(f==1){
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