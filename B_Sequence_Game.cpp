#include <bits/stdc++.h>
using namespace std;
int main() {
int t; cin >>t;
while(t--){
    int n; cin >>n;
    vector <long long> b(n);
    vector <long long> c;
for (int i = 0; i < n; i++)
{
    cin >> b[i];
}
int first = b[0];
c.push_back(first);
for (int i = 0; i < n-1; i++)
{
    if(b[i+1]>= b[i]){
        c.push_back(b[i+1]);
    }
    else{
        c.push_back(b[i+1]);
        c.push_back(b[i+1]);
    }
}
cout << c.size() <<endl;
for (int i = 0; i <c.size(); i++)
{
    cout << c[i] << " ";
}
cout<<endl;
}
return 0;
}