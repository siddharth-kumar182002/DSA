#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long x,y;
cin>>x>>y;

long long screen=0;
if(y%2==0){
    screen=screen+y/2;
}
else{
    screen=(screen+y/2)+1;
}

long long space=15*screen-(y*4);

if(space<x){
    x=x-space;
    if(x%15==0){
        screen=screen+x/15;
    }
    else{
        screen=screen+(x/15)+1;
    }
}
cout<<screen<<endl;


}
return 0;
}