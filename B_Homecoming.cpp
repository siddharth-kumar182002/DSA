#include <bits/stdc++.h>
using namespace std;

bool f(long long mid,string &s,long long a,long long b,long long p){
            long long sum=0;
            long long n=s.size();
            for (int i = mid; i <(n-1); i++)
            {
                  if(s[i]=='A'){
                    sum=sum+a;
                  }
                  else{
                    sum=sum+b;
                  }
                  long long j=i+1;
                  while(j<n && s[j]==s[i]){
                    j++;
                  }
                  j--;
                  i=j;
            }
            if(sum<=p){
                return true;
            }
            else{
                return false;
            }
            
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long a,b,p;
cin>>a>>b>>p;
string s;
cin>>s;
long long n=s.size();
long long l=-1;
long long r=n-1;
while(l+1<r){
    long long mid=(l+r)/2;
    if(f(mid,s,a,b,p)){
        r=mid;
    }
    else{
        l=mid;
    }
}
cout<<r+1<<endl;

}
return 0;
}