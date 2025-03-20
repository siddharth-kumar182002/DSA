#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
vector<int> v;
int maxy=-1;
int b=-1;
int miny=100000;
int a=100000;
for (int i = 0; i < n; i++)
{
    int temp;
    scanf("%d",&temp);
    v.push_back(temp);

}
for(auto it=v.begin();it!=v.end();it++){
    maxy=max(maxy,*it);
    miny=min(miny,*it);
}

for (int i = 0; i < n; i++)
{
    if(v[i]==maxy){
         a=min(a,i);
    }
       if(v[i]==miny){
        b=max(b,i);
   }
}
if(a>b){
    cout<<a+(n-b-1)-1<<endl;
}
else if(b>a){
    cout<<a+(n-b-1)<<endl;
}




return 0;
}