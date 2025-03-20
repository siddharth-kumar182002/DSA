#include <bits/stdc++.h>
using namespace std;
int main() {

    string s;
    cin>>s;
    long long n=s.size();

    long long c1=0;
    long long c2=0;
vector<int> a1;
vector<int> a2;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]=='A' && s[i+1]=='B'){
            a1.push_back(i);
            continue;
        }
         if(s[i]=='B' && s[i+1]=='A'){
            a2.push_back(i);
            continue;
        }

    }
int f=0;
    for (int i = 0; i < a1.size(); i++)
    {
        for (int j = 0; j <a2.size(); j++)
        {
            if((abs(a1[i]-a2[j]))!=1){
                cout<<"YES"<<endl;
                f=1;
                break;
            }
        }
        if(f==1){
            break;
        }
        
    }
    
if(f==0){
    cout<<"NO"<<endl;
}
return 0;
}