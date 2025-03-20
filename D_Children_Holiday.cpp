#include <bits/stdc++.h>
using namespace std;
int main() {
 freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
long long x,y,m;
cin>>x>>y>>m;


long long maxi=-1;

for (int i = 0; i <=1000; i++)
{
    if(x*i>m){
        break;
    }
    for (int j = 0; j <=1000; j++)
    {
        if((x*i+y*j)<=m){
            maxi=max(maxi,(x*i+y*j));
        }
        else{
              break;
        }
    }
    
}

cout<<maxi<<endl;
return 0;
}