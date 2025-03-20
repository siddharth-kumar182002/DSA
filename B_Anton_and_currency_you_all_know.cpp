#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
string s;
cin>>s;
long long n=s.size();
long long ind=-1;
long long ind1=-1;
for (int i = 0; i < n; i++)
{
        if((s[i]-'0')%2==0){
            if(ind==-1 || (s[ind]>s[n-1])){
                ind=i;
            }

            if(ind1==-1 && (s[n-1]>s[i])){
                ind1=i;
            }
        }
}
if(ind==-1){
    cout<<-1<<endl;
}
else{
    if((s[n-1]-'0')%2!=0){
    swap(s[ind],s[n-1]);
    }
    else{
        if(ind1!=-1){
        swap(s[ind1],s[n-1]);
        }
    }
    cout<<s<<endl;
}

return 0;
}