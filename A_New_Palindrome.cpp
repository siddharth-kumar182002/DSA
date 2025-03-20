#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin >>t;
while(t--){
    string s;
    cin >> s;
    set<char> se;
 for(int i = 0; i<(s.size()/2); i++){
    se.insert(s[i]);
 }
 int f=se.size();
if (f >=2){
    cout << "YES" << endl;
}
else {
    cout << "NO" << endl;
}
 
 
        
}
return 0;
}