#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;
while(n--){
vector<string> arr(9);
for (int i = 0; i < 9; i++)
{
    cin>>arr[i];
}

arr[0][2]=arr[1][2];
arr[1][5]=arr[2][5];
arr[2][8]=arr[1][8];

arr[3][1]=arr[4][1];
arr[4][4]=arr[5][4];
arr[5][7]=arr[4][7];

arr[6][0]=arr[7][0];
arr[7][3]=arr[8][3];
arr[8][6]=arr[7][6];
for (int i = 0; i < 9; i++)
{
    cout<<arr[i]<<endl;
}
}
return 0;
}