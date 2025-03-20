#include<iostream>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    float e,f;
    e=a/b;
    f=c/d;
    if(e==f){
        cout<<0<<endl;
    }
    else{
        if(a==0||c==0){
            cout<<1<<endl;
        }
        else if((b*c)%(a*d)==0){
            cout<<1<<endl;
        }
        else if((b*c)%(a*d)!=0){
            cout<<2<<endl;
        }
    }

}
return 0;
}