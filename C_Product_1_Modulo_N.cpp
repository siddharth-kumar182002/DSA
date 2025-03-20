#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<long long > seq;
long long p=1;
for (long long i = 1; i < n; i++)
{
    if(__gcd(n,i)==1){
       seq.push_back(i);
       p=(p*i)%n;
    }
}
if(p==1){
    cout<<seq.size()<<endl;
    for (int i = 0; i < seq.size(); i++)
    {
        cout<<seq[i]<<" ";
    }
 cout<<endl;
}
else{
      cout<<seq.size()-1<<endl;
    for (int i = 0; i < seq.size(); i++)
    {
        if(seq[i]==p){
            continue;
        }
        cout<<seq[i]<<" ";
    }
 cout<<endl;
}

return 0;
}