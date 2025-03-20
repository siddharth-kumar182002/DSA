#include<iostream>
using namespace std;
int main() {
int t;
cin>>t;

while(t--){

    int n,k;
    cin>>n>>k;


    if(k==0 || k%4==0){

        cout<<"NO"<<endl;
    }
    else{

        cout<<"YES"<<endl;

    if(k%2==0){

        

        for (int i = 1; i <= n/4 ; i++)
        {
            cout<<((4*i)-1)<<" "<<4*i<<endl;
        }

        for (int i = 1; i <=((n/2)-(n/4)); i++)
        {

            cout<<(4*i-2)<<" "<< ((4*i)-3) <<endl;
        
        }
        
        


    }
    else{

        

        for (int i = 1; i <= n/2; i++)
        {
            cout<<((2*i)-1) <<" "<<(2*i)<<endl;
        }
        


    }
}
}
return 0;
}