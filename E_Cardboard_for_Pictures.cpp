#include <bits/stdc++.h>
using namespace std;

bool f(long long w,long long c,vector<long long> &arr){
    long long area=0;
  for (int i = 0; i < arr.size(); i++)
  {
    long long a=arr[i]+2*w;
    if(a>=1e9){
        return false;
    }
          area=area+((a)*(a))*1LL;
          if(area>c){
            return false;
          }
  }
  if(area>c){
    return false;
  }
  else{
    return true;
  }
  
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,c;
cin>>n>>c;
vector<long long> arr(n);
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

long long lo=1;
long long hi=1e12;
while(hi-lo>1){
long long w=(hi+lo)/2;

if(f(w,c,arr)){
lo=w;
}
else{
    hi=w-1;
}
//cout<<"hi"<<hi<<endl;
//cout<<"lo"<<lo<<endl;
}
if(f(hi,c,arr)){
    cout<<hi<<endl;
}
else{
    cout<<lo<<endl;
}

}
return 0;
}