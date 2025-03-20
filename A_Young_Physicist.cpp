#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;

int arr[t][3];
int sum=0;
int flag=0;

for (int i = 0; i < t; i++)
{
    for (int j = 0; j < 3; j++)
    {
        cin>>arr[i][j];
        
    }

    
}

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < t ; j++)
    {
        sum=sum+arr[j][i];
        
    }

    if(sum==0){
        continue;
    }
    else{
        flag=1;
        break;
    }
    
}



if(flag==0){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}


return 0;
}