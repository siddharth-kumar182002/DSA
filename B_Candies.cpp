#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
long long n;
cin>>n;

long long x=40;
long long p=1;
long long y;
while(x--){
y=2*p+1;
p=y;
}

if(n%2==0 || n>y){
    cout<<-1<<endl;
}
else{

vector<int> ans;

long long z=n/2;
    while(z>0){
        if(z%2==0){
           z=z+1;
z=z/2;
ans.push_back(1); 
        }
        else{
            ans.push_back(2);
z=z/2;
        }
    }

int x=ans.size();
if(x>40){
    cout<<-1<<endl;
}
else{
cout<<x<<endl;
for (int i = x-1; i >= 0; i--)
{
    cout<<ans[i]<<" ";
}
cout<<endl;
}


}

}
return 0;
}