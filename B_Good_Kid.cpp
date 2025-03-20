#include <bits/stdc++.h>
using namespace std;
/*int multiplication(int n, int arr[n]){
    int ans = 1;
    for(int i = 1; i<n; i++){
          ans = ans * arr[i];
    }
}*/
long long product(int arr[], int n) 
{ 
    int result = 1; 
    for (int i = 0; i < n; i++) 
        result = result * arr[i]; 
    return result; 
}
int main() {
int t; cin >> t;
while(t--){
    int n; cin >> n;                                
    int arr[n];
    int count;
    long long f;
    for(int i=0; i<n; i++){
        cin >> arr[i];
       // sort(arr, arr+n);
    }
     sort(arr, arr+n);
     arr[0]=arr[0]+1;
    count = product(arr,n);
   
cout<< count << endl;
//cout << arr[0] << endl;    
   //cout << mini << endl;
      //cout << count * (f +1) << endl; // main output to be printed
    }
return 0;
}