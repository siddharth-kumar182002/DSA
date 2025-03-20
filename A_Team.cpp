#include<iostream>
using namespace std;
int main() {


int n;
cin>>n;
int c=0;


while(n--){
    int array[3];
    cin>>array[0]>>array[1]>>array[2];
    int a=0;

    for (int i = 0; i < 3; i++)
    {

        if(array[i]==1){
            a=a+1;

        }
        else{

            continue;
        }

    }

    if(a>=2){
        c=c+1;
    }


    

}
cout<< c;
return 0;
}