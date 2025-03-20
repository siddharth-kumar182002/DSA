#include<iostream>
using namespace std;
int main() {

int t;
cin>>t;

while(t--){

    int n;
    cin>>n;

    int a[n];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for ( int j = 0; j < n-1; j++)
    {
        if(a[j+1]<a[j]){

            for (int i = 0; i < n; i++)
            {
                if(a[i]==a[j]){
                    a[i]=0;

                }
                else{
                    continue;
                }
                

            }

            count=count+1;

            j=(-1);
            
            
        }
        else{
            continue;
        }
        
        
        
    }
        
    cout<<count<<endl;
    
    



}
return 0;
}