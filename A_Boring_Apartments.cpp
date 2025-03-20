#include<iostream>
using namespace std;
int main() {
int t;
cin>>t;

while(t--){

    string n;
    cin>>n;


    for (int i = 49; i <= 57; i++)
    {
        if(n.at(0)==i){
            int k = i - 48;
            cout<<(10*(k-1))+(n.length()*(n.length()+1)/2)<<endl;

        }
    }
    





}
return 0;
}