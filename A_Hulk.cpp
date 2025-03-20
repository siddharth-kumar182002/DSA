#include<iostream>
using namespace std;
int main() {

    int n;

    cin >> n; 


string a("I hate it");
string b("I hate that");
string c("I love it");
string d("I love that");


for (int i = 0; i < n ; i++){
{

    
    if(i%2==0){


        if(i==(n-1)){
            cout<<a<<" ";
        }

        else{
        
        cout<<b<<" ";
        }


    }
    else{

        if(i==(n-1)){
            cout<<c<<" ";
        }
        else{

        cout<<d<<" ";
        }
    }



    }

}

return 0;
}   