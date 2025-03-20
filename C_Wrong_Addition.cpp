#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
string a,s;
cin>>a>>s;
long long sa=a.size();
long long ss=s.size();

    string ans="";
    long long j=ss-1;
    long long flag=0;
    long long i=sa-1;
    while(j>-1)
    {
        if((a[i]-'0')<=(s[j]-'0')){
            if(i<0){
                ans.push_back(char((s[j]-'0')+48));
                             j--;
                             i--;
            }
            else{
             ans.push_back(char((s[j]-'0')-(a[i]-'0')+48));
             j--;
             i--;
            }
        }
        else{
            int temp;
            if(j==0){
              temp=(s[j]-'0');
            }
            else{
             temp=(s[j]-'0')+(s[j-1]-'0')*10;
            }
            if((temp<10 || temp>19)){
                flag=1;
                cout<<-1<<endl;
                break;
            }
              ans.push_back(char((temp-(a[i]-'0')+48)));
              j=j-2;
              i--;


        }
    }
    if(flag!=1){
if(i>-1){
    cout<<-1<<endl;
}
else{
        reverse(ans.begin(),ans.end());
        long long k = 0;
    while (ans[k] == '0')
        k++;
  
    // The erase function removes i characters
    // from given index (0 here)
    ans.erase(0, k);
  
    cout<<ans<<endl;
    
}
 }

    

}
return 0;
}