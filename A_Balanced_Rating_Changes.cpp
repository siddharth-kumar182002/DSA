#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int odd=0;

vector<int> v(n);

for (int i = 0; i <n; i++)
{
    cin>>v[i];
    if(v[i]%2!=0){
        odd++;
    }
}

odd=odd/2;
//cout<<"odd"<<odd<<endl;
for (auto x:v)
{
    if(x%2!=0){
        if(odd>0){
            odd--;
           // cout<<"odd"<<odd<<endl;
            x--;
           // cout<<"xin="<<x<<endl;
        }
        else{
        x++;
        }
    }
    cout<<x/2<<endl;
}




return 0;
}