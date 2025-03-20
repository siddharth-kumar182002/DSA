#include<iostream>
using namespace std;
int main() {

int t;
cin>> t;

while(t--){

    int n;
    cin>> n;

    int array[n];

    int i=0;
    for (int i = 0; i < n; i++)
    {
        array[i]=i+1;
    }
    
        if(n%2==0){

        while(i<n){


            
                swap(array[i],array[i+1]);
                i=i+2;
            

        }   
        }
            
         else{
            i=i+1;

            while(i<n){
            
            swap(array[i],array[i+1]);
            i=i+2;
            }
                
                
            }
            
        
        for (int i = 0; i < n; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
        
     
    }

    
    
  return 0;  

}
