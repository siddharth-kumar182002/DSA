#include <bits/stdc++.h>
using namespace std;
long long n,k;

bool check(long long z){
    if(z>(k-1)){
        return false;
    }
    else{
    long long sum=z*k-(((z+1)*z)/2)+1;
    if(sum>=n){
        return true;
    }
    else{
        return false;
    }
    }

}

int main() {
cin>>n>>k;

//cout<<check(1);

   long long lo=0;
    long long hi=(k-1);
    long long mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(check(mid)){
            hi=mid;

        }
        else{
            lo=mid+1;
        }
    }

    if(check(lo)){
           cout<<lo<<endl;
    }
    else if(check(hi)){
        cout<<hi<<endl;
    }
    else{
        cout<<-1<<endl;
    }


return 0;
}