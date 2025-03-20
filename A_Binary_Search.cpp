#include <bits/stdc++.h>
using namespace std;
int main() {

long long n,k;
cin>>n>>k;
vector<int> arr;
for (int i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    arr.push_back(temp);
}

while(k--){
    long long t;
    cin>>t;

//cout<<t<<endl;
long long lo=0;
long long hi=n-1;
long long mid;
while(hi-lo>1){
    mid=(hi+lo)/2;
    //cout<<"mid"<<mid<<endl;
    if(arr[mid]>t){
        hi=mid-1;
    }
    else{
        lo=mid;
    }
}
//cout<<"lo"<<lo<<endl;
if(arr[hi]<=t){
    cout<<hi<<endl;
    continue;
}
else{
cout<<lo<<endl;
continue;
}

}


return 0;
}