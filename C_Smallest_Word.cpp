#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
string s;
cin>>s;
//aazxyaaa
vector<long long> arr;
for (int i = 0; i < s.size(); i++)
{
    if(s[i+1]<=s[0] && i<(s.size()-1)){
         arr.push_back(1);
         i++;
         while(s[i+1]<=s[i] && i<(s.size()-1)){
            arr.push_back(0);
            i++;
         }
         arr.push_back(1);
         swap(s[0],s[i]);
         

    }
    else{
        arr.push_back(0);
    }
}

for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;

return 0;
}