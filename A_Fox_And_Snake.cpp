#include<iostream>
using namespace std;


void rest(int n){
while(n--){
    cout<<"#";
}
cout<<" "<<endl;
}

void fest(int n){
    int a;
    a=(n-1);
    while(a--){
        cout<<".";
        


    }
    cout<<"#"<<endl;
}


void nest(int n){
    int b;
    b=(n-1);
    cout<<"#";
    while(b--){
        cout<<".";
        


    }
    cout<<" "<<endl;
    
}



int main() {


    int n,m;
    cin>>n>>m;

    for (int i = 0; i < (n/2+1); i++)
    {


        rest(m);

        if(i==(n/2)){

        break;
        }

        

        if(i%2==0){
            fest(m);


        }
        else{
            nest(m);


        }



        

    
    }
    


return 0;
}