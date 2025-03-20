#include<iostream>
using namespace std;

int binary_search(int array[], int n ,int key ){

    int s=0;
    int e=n;

    while(s<=e){
        int midterm = (s+e)/2;
        if(key==array[midterm]){
            return midterm;
        }
        else if(key>array[midterm]){
            s=midterm+1;
        }
        else{
            e=midterm-1;
        }
    }
    return -1;
}



int main() {
int n;
cin>>n;

int array[n];
for (int i = 0; i < n; i++)
{
    cin>>array[i];
}

int key;
cin>>key;

cout<<binary_search(array,n,key);




return 0;
}