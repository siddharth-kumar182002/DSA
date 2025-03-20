#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long arr[10][10];
for (int i = 0; i < 10; i++)
{
    for (int j  = 0; j < 10; j++)
    {
        arr[i][j]=1;
    }
}
for (int i = 1; i < 9; i++)
{
    for (int j  = 1; j < 9; j++)
    {
        arr[i][j]++;
    }
}
for (int i = 2; i < 8; i++)
{
    for (int j  = 2; j < 8; j++)
    {
        arr[i][j]++;
    }
}
for (int i = 3; i < 7; i++)
{
    for (int j  = 3; j < 7; j++)
    {
        arr[i][j]++;
    }
}
for (int i = 4; i < 6; i++)
{
    for (int j  = 4; j < 6; j++)
    {
        arr[i][j]++;
    }
}
long long ans=0;
for (int i = 0; i < 10; i++)
{
    string a;
    cin>>a;
    for (int j = 0; j < 10; j++)
    {
        if(a[j]=='X'){
            ans=ans+arr[i][j];
        }
    }
    
}

cout<<ans<<endl;

}
return 0;
}