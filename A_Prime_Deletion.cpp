#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{

    if (n <= 1)
        return false;
 
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int main() {
int t;
cin>>t;
while(t--){
string s;
cin>>s;
int f=0;
for (int i = 0; i < s.size(); i++)
{

    for (int j = i+1; j < s.size(); j++)
    {
        string temp=" ";
        temp=temp+s[i]+s[j];
        long long num=stoi(temp);
        if(isPrime(num)){
            cout<<num<<endl;
            f=1;
              break;
        }

    }
    if(f==1){
        break;
    }
}
if(f!=1){
    cout<<-1<<endl;
}

}
return 0;
}