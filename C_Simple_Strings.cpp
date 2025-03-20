#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    long long n=s.size();
    for (int i = 1; i < n; i++)
    {
        char c='a';
        if(s[i]==s[i-1]){
              while(s[i]==c || (i>0 && s[i-1]==c) || (i<n && s[i+1]==c)){
                c++;
              } 
              s[i]=c;
        }
    }
    cout<<s<<endl;
    
return 0;
}