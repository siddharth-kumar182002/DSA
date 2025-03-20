#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,u,r,d,l;
cin>>n>>u>>r>>d>>l;
long long f=0;
for (int i = 0; i <16; i++)
{
    long long a,x,y,z;
    a=u;
    x=r;
    y=d;
    z=l;
    if(i &1){
        a=a-1;
        z=z-1;
    }
    if(i & 2){
        a=a-1;
        x=x-1;
    }
    if(i & 4){
        x=x-1;
        y=y-1;
    }
    if(i & 8){
        y=y-1;
        z=z-1;
    }
    // if(i==7){
    //     cout<<a<<" "<<x<<" "<<y<<" "<<z<<endl;
    // }
    if(a>=0 && x>=0 && y>=0 && z>=0 && a<=(n-2) && x<=(n-2) && y<=(n-2) && z<=(n-2)){
        cout<<"YES"<<endl;
        f=1;
        break;
    }

}
if(f==0){
    cout<<"NO"<<endl;
}
}
return 0;
}