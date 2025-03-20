#include<iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n,k,r,c;
cin>>n>>k>>r>>c;

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <=n; j++)
    {
        if(i==r && j==c){
            cout<<"X";
            continue;

        }
        if((i+j)%k==0){
            cout<<"X";
        }
        else{
            cout<<".";
        }
    }
    cout<<endl;
    
}


}

return 0;
}