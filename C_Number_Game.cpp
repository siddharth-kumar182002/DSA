#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
if(n<=1){
  cout<< "FastestFinger"<<endl;
}
else{
  if(n%2!=0){
    cout<<"Ashishgup"<<endl;
  }
  else{
    long long temp=n;
    long long x=0;
    while(temp%2==0){
      temp=temp/2;
      x++;
    }
    long long div=0;
   
    for (int i = 1; i*i<=(temp); i++)
    {
        if(temp%i==0){
          if((temp/i)==i){
              div++;
          }
          else{
                 div=div+2;
          }
        }
    }
    
   if(x==1){
//win whem i get even
if(div>2){
  cout<<"Ashishgup"<<endl;
}
else if(div==2){
  cout<< "FastestFinger"<<endl;
}
else{
   cout<<"Ashishgup"<<endl;
}
   }
   else{
//win when i opponent get even
if(div>=2){
  cout<< "Ashishgup"<<endl;
}
else{
cout<< "FastestFinger"<<endl;
}
   }
  }
}
}
return 0;
}
// Divide n
//  by any of its odd divisors greater than 1
// 
// Subtract 1
//  from n
//  if n
//  is greater than 1
