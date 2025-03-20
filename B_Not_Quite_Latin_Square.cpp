#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
vector<string> arr(3);
long long x=-1;
for (int i = 0; i < 3; i++)
{
    cin>>arr[i];
    for (int j = 0; j < 3; j++)
    {
        if(arr[i][j]=='?'){
           x=i;
        }
    }
    
}

vector<long long> count(3,0);
for (int i = 0; i < 3; i++)
{
    if(arr[x][i]!='?'){
    count[arr[x][i]-'A']++;
    }
}
char s='A';
for (int i = 0; i < 3; i++)
{
    if(count[i]==0){
        char ans=s+i;
        cout<<ans<<endl;
        break;
    }
}


}
return 0;
}