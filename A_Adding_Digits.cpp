#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long a,b,n;
cin>>a>>b>>n;
long long x=10;
long long f=0;

    long long temp=a*x;
for (int i = 0; i <=9; i++)
{
        if((temp+i)%b==0){
            temp=temp+i;
            a=temp;
           f=1;
           break;
        }
}
if(f==0){
    cout<<-1<<endl;
}
else{
    string s=to_string(a);
    n--;
    while(n--){
        s+='0';
    }
    cout<<s<<endl;

}


return 0;
}