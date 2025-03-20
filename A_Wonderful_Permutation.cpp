#include<iostream>
using namespace std;
int main() {
int t;
cin>>t;

while(t--){


    int n, k;
    cin>>n>>k;

    int array[n];
    int count=0;

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];

    }

    for (int i = 1; i < k+1; i++)
    {
        if(array[i-1]==i){

            continue;


        }
        else{

            count=count+1;
        }

    }

    cout<<count<<endl;
    

    
    





}
return 0;
}