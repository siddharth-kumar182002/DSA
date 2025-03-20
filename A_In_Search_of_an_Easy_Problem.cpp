#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
int flag=0;

vector<int> v(t);

for (int i = 0; i < t; i++)
{
    cin>>v[i];
    if(v[i]==1){
        flag=1;

       break;

    }
}
if(flag==1){
    cout<<"HARD"<<endl;
}
else{
    cout<<"EASY"<<endl;
}

return 0;
}