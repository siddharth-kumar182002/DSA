#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
vector<int> arr(t);
for (int i = 0; i < t; i++)
{
    cin>>arr[i];
}

int count=0;
int maxi=0;
for (int i = 0; i < t; i++)
{
    
    for (int j = i; j<t; j++)
    {
        count=0;
        for (int k = 0; k<t ; k++)
        {
            if(k>=i && k<=j){
                count=count+1-arr[k];
            }
            else{
                count=count+arr[k];
            }

        }
        maxi=max(maxi,count);
    }
    
}


cout<<maxi<<endl;



return 0;
}