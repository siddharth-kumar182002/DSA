#include <bits/stdc++.h>
using namespace std;
int main() {
long long n;
cin>>n;
vector<long long > arr(n);
multiset<long long> m;
for (int i = 0; i < n; i++)
{
    long long cube;
    cin>>cube;
    if(m.empty()){
        m.insert(cube);
    }else{
        auto it=m.upper_bound(cube);
        if(it==m.end()){
            m.insert(cube);
        }
        else{
            m.erase(it);
            m.insert(cube);
        }
    }
}
cout<<m.size()<<endl;

return 0;
}