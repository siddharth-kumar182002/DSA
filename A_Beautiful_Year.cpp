#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;

while(true){

    n=n+1;

int a=n/1000;
int b=n/100-a*10;
int c=n/10-(a*100+b*10);
int d=n-(a*1000+b*100+c*10);

if(a==b || a==c || a==d){
    continue;

}
else if(b==c || b==d ){

    continue;
}
else if( c==d){

    continue;

}
else{

    cout<<n;
    break;
}



}



return 0;
}