#include<iostream>
#include <set>
using namespace std;
int main() {
int t;
cin>>t;

while(t--){

    string n;
    string m;
    cin>>n;
    cin>>m;
    set<int> s;
    s.insert(n.at(0));
    s.insert(n.at(1));
    s.insert(m.at(0));
    s.insert(m.at(1));
    int a = s.size();
    if(a==4){
        cout<<3<<endl;
    }
    if(a==3){

        cout<<2<<endl;
    }

    if(a==2){
        cout<<1<<endl;
    }
    if(a==1){
        cout<<0<<endl;
    }

    


    
}
return 0;
}