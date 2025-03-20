#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
    long long n;
char c;
cin>>n>>c;
string s;
cin>>s;

    int ch1=0;
    int an=-1;
    for (int x = 1; x <=n; x++)
    {
            ch1=0;
        for (int i = x; i<=n; i=i+x)
        {
            if(s[i-1]!=c){
                ch1=1;
                break;
            }
        }
        if(ch1==0){
            an=x;
            break;
        }
        
        
        
    }

     if(an==1){
        cout<<0<<endl;
         continue;
     }

    if(ch1==0){
        cout<<1<<endl;
        cout<<an<<endl;
    }
    else{
        cout<<2<<endl;
        cout<<n<<" "<<(n-1)<<endl;
    }
    


}
return 0;
}