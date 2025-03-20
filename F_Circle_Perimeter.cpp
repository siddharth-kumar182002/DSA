#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
double r;
cin>>r;
long long ans=0;
for (double i = 0; i <=r; i++)
{
    long long a=sqrt(pow(r,2)-pow(i,2));
    long long b=sqrt(pow((r+1),2)-pow(i,2));
    cout<<"b="<<b<<endl;
    
        if((pow(b,2)+pow(i,2))==(pow(r+1,2))){
        cout<<"hi"<<endl;
            b--;
        }

        if(((pow(a,2)+pow(i,2))<(pow(r,2)))){
                   a++;
        }
        cout<<"i="<<i<<endl;
        cout<<a<<" "<<b<<endl;

        ans=ans+b-a+1;
        cout<<ans<<endl;

}

ans=ans*4-4;
cout<<ans<<endl;



}
return 0;
}