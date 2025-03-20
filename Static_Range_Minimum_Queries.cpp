#include <bits/stdc++.h>
using namespace std;

const int maxn=2e5+1;
int arr[maxn];
int lg[maxn];
int sparse[maxn][20];


void build(int n){
for (int j = 0; j < 20; j++)
{
    for (int i = 0; (i+(1<<j)-1)< n; i++)
    {
     
        if(j==0){
            sparse[i][j]=arr[i];
        }
        else{
            sparse[i][j]=min(sparse[i][j-1],sparse[i+(1<<(j-1))][j-1]);
        }
    
    }
    
}
}

int query(int a,int b){

    int w=b-a+1;
    int j=lg[w];
     cout<<a<<" "<<j<<endl;
     cout<<(b-(1<<j)+1)<<" "<<j<<endl;
     cout<<sparse[a][j]<<endl;
     return min(sparse[a][j],sparse[b-(1<<j)+1][j]);
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n,q;
cin>>n>>q;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}


lg[1]=0;
for (int i = 2; i <maxn; i++)
{
    lg[i]=1+lg[i/2];
}

build(n);


for (int i = 0; i < q; i++)
{
    int a,b;
    cin>>a>>b;
      a--;
      b--;
    cout<<query(a,b)<<endl;
}



return 0;
}