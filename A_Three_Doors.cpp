#include<iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[3];
    //cin>>a[0]>>a[1]>>a[2];
    for (int i = 0; i < 3; i++)
    {
        cin>>a[i];
    }
    


    if(a[n-1]==0){
        cout<<"NO"<<endl;
        
    }
    else{
        if(a[a[n-1]-1]==0){
            cout<<"NO"<<endl;

        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
}


return 0;
}