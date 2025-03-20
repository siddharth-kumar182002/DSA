#include <bits/stdc++.h>
using namespace std;

bool f(vector<long long> &arr,long long x){
    long long count=1;
    long long v=arr[0]+x;
    for (int i = 1; i < arr.size(); i++)
    {
        if(abs(v-arr[i])>x){
            v=arr[i]+x;
            count++;     
        }
        //cout<<v<<" ";
    }
    if(count>3){
        return false;
    }
    else{
        return true;
    }
    
}


int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr;
for (int i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    arr.push_back(temp);
}

sort(arr.begin(),arr.end());
//cout<<f(arr,1)<<endl;
//ffffttttt

long long lo=0;
long long hi=1e9;
while(hi-lo>1){
long long mid=(lo+hi)/2;

if(f(arr,mid)){
hi=mid;
}
else{
    lo=mid+1;
}

}
if(f(arr,lo)){
    cout<<lo<<endl;
}
else{
    cout<<hi<<endl;
}

}
return 0;
}