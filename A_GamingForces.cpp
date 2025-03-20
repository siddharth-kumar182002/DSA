#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
int monst[n];
for (int i = 0; i < n; i++)
{
    cin>>monst[i];
}

sort(monst,monst+n);
int count=0;
for (int i = 0; i < n-1; i++)
{
    if(monst[i]<=1){
        if(monst[i]==0){
            continue;
        }
        else{
            monst[i]=monst[i]-1;
            monst[i+1]=monst[i+1]-1;
            count++;

        }
    }
    else{
        break;
    }
}
int count1=0;
for (int i = 0; i < n; i++)
{
    if(monst[i]>0){
        count1++;
    }
}
cout<<count+count1<<endl;



}
return 0;
}