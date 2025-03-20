#include <bits/stdc++.h>
using namespace std;

/*long long f(long long x,set<long long> &s){
    auto it=s.lower_bound(x);
      if(it==s.begin()){
        return *it;
      }
      else if(it==s.end()){
        it--;
        return *it;
      }
      else{
        long long a=*it;
        it--;
        long long b=*it;
        if((x-b)<=(a-x)){
            return b;
        }
        else{
            return a;
        }
      }
}*/
int main() {
long long n,m;
cin>>n>>m;

multiset<long long> s;
for (int i = 0; i < n; i++)
{
    long long temp;
    cin>>temp;
    s.insert(temp);

}
for (int i = 0; i < m; i++)
{
    long long x;
    cin>>x;
    auto it=s.lower_bound(x);
    if(it==s.begin() && *it!=x){
        cout<<-1<<endl;
    }
    else{
        if(*it==x){
            cout<<*it<<endl;
            s.erase(it);
        }
        else{
        it--;
        cout<<*it<<endl;
        s.erase(it);
        }
    }
}



return 0;
}