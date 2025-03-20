#include<iostream>
using namespace std;
int main() {
int t;
cin>>t;

while(t--){
    int n;
    cin>>n;

    string x;
    cin>>x;
    string y;
    cin>>y;
    int c=0;
    // cout << x << " "<< y << endl;
    if(x==y){
        cout<<"YES"<<endl;
    }
    else{

    for (int i = 0; i < x.length(); i++)
    {
            if(x.at(i)==y.at(i) ){
                // continue;



            }
            else if((x.at(i)=='B' && y.at(i)=='G') || (x.at(i)=='G' && y.at(i)=='B')){
                continue;
                //cout << "bkc" << endl;
                // break;

            }
            else{
                c=c+1;
                break;
            }

        
        
    }
    if(c==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    
}
return 0;
}