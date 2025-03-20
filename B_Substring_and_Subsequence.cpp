#include <bits/stdc++.h>
using namespace std;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
string a,b;
cin>>a>>b;
string temp="";
long long maxi=-1;

for (int i = 0; i < b.size(); i++)
{
    temp="";
    for (int j = i; j < b.size(); j++)
    {
        temp+=b[j];
         long long x=0;
         long long y=0;
         long long count=0;
         while(x<a.size() && y<temp.size()){
               if(temp[y]==a[x]){
                count++;
                y++;
               }
               x++;
         }

         maxi=max(count,maxi);
    }
    
}

long long ans=a.size()+(b.size()-maxi);
cout<<ans<<endl;


}
return 0;
}