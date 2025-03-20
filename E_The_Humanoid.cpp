#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200200;
int n;
int arr[MAXN];
long long solve(long long i,long long h,long long g,long long b){
    if(i==n){
        return 0;
    }

    if(arr[i]<h){
        return solve(i+1,h+arr[i]/2,g,b)+1;
    }
    else{
        long long ans1,ans2;
       if(g>0){
        ans1=solve(i,2*h,g-1,b);
       }
       else{
        ans1=0;
       }
       if(b>0){
        ans2=solve(i,3*h,g,b-1);
       }
       else{
        ans2=0;
       }
      return max(ans1,ans2);
    }
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long h;
cin>>n>>h;


for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

sort(arr,arr+n);
//2 green 1 blue
//1 2 8 9
cout<<solve(0,h,2,1)<<endl;

}
return 0;
}