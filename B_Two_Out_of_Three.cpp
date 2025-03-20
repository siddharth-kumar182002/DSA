#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n;
cin>>n;
vector<long long> arr(n);
map<long long ,long long> mp;
for (int i = 0; i <n; i++)
{
    cin>>arr[i];
    mp[arr[i]]++;
}
int f=0;
vector<long long> brr(n,-1);
long long ch=0;
for (int i = 1; i <=100; i++)
{
    if(mp[i]>=2){
        ch++;
         long long b=1;
        for (int j = 0; j < arr.size(); j++)
        {
            if(f==1){
                if(b==1){
                    b++;
                }
            }
            if(arr[j]==i){
                  brr[j]=b;
                  b++;
                  if(f==1){
                    b=b%4;
                    if(b==0){
                        b++;
                    }
                  }else{
                  b=b%3;
                  if(b==0){
                    b++;
                  }
                  }
            }
        }
        f=!f;
    }
}
if(ch>=2){
for (int i = 0; i < arr.size(); i++)
{
    if(brr[i]==-1){
        brr[i]=1;
    }
}


for(auto x :brr){
    cout<<x<<" ";
}
cout<<endl;


}
else{
    cout<<-1<<endl;
}




}
return 0;
}