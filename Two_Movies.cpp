#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long > arr(n);
vector<long long> brr(n);


for (int i = 0; i <n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i <n; i++)
{
    cin>>brr[i];
}

long long x=0;
long long y=0;

for (int i = 0; i <n; i++)
{
    if(arr[i]==0 && brr[i]==0){
        continue;
    }
    if(arr[i]==0 && brr[i]==-1){
        continue;
    }
    if(arr[i]==-1 && brr[i]==0){
        continue;
    }
    if(arr[i]==1 && brr[i]==0){
        x=x+1;
        continue;
    }
    if(arr[i]==0 && brr[i]==1){
        y=y+1;
        continue;
    }
    if(arr[i]==1 && brr[i]==-1){
        x=x+1;
        continue;
    }
    if(arr[i]==-1 && brr[i]==1){
        y=y+1;
        continue;
    }

}

for (int i = 0; i < n; i++)
{
    if(arr[i]==1 && brr[i]==1){
        if(x>=y){
             y=y+1;
        }
        else{
            x=x+1;
        }
        continue;
    }
    if(arr[i]==-1 && brr[i]==-1){
       if(x>=y){
             x=x-1;
        }
        else{
            y=y-1;
        }
        continue;
    }
}

cout<<min(x,y)<<endl;





}
return 0;
}