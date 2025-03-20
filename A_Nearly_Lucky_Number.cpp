#include<iostream>
using namespace std;

int main(){

int count=0;
string n;

cin>> n;

for (int i = 0; i < n.length(); i++)
{
    if (n.at(i)=='4' || n.at(i)=='7'){

        count=count+1;


        
    }
    else{
        continue;
    
    }
}

    if(count==4 || count==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }







return 0;
}