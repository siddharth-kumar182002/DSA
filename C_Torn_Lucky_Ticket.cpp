#include <bits/stdc++.h>
using namespace std;
bool f(string s){
long long n=s.size();
if(n%2!=0){
return false;
}
else{
long long f=0;
long long l=0;
for (int i = 0; i < n; i++)
{
    if(i<n/2){
        f=f+s[i]-'0';
    }
    else{
        l=l+s[i]-'0';
    }
}
if(f==l){
    return true;

}
else{
    return false;
}
}
}

long long sum(string s){
    long long n=s.size();
    long long a=0;
    for (int i = 0; i < n; i++)
    {
        a=a+s[i]-'0';
    }
    return a;
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n;
cin>>n;

vector<string> arr(n);
map<long long,long long> one;
map<long long,long long> two; 
map<long long,long long> three; 
map<long long,long long> four; 
map<long long,long long> five; 
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i].size()==1){
        one[sum(arr[i])]++;
    }
    if(arr[i].size()==2){
        two[sum(arr[i])]++;
    }
    if(arr[i].size()==3){
        three[sum(arr[i])]++;
    }
    if(arr[i].size()==4){
        four[sum(arr[i])]++;
    }
    if(arr[i].size()==5){
        five[sum(arr[i])]++;
    }
}

long long ans=0;

for (int i = 0; i < n; i++)
{
    if(arr[i].size()==5){
         long long x=sum(arr[i]);
         //33
         long long m=x-2*(arr[i][0]-'0');
         long long n=x-2*(arr[i][4]-'0');
         ans=ans+three[m];
         ans=ans+three[n];
         //11
         long long u=x-2*((arr[i][0]-'0')+(arr[i][1]-'0'));
         long long v=x-2*((arr[i][4]-'0')+(arr[i][3]-'0'));
         ans=ans+one[u];
         ans=ans+one[v];
         //55
         ans=ans+five[x];

    }

    if(arr[i].size()==3){
        //11
        long long x=sum(arr[i]);
        long long u=x-2*(arr[i][0]-'0');
         long long v=x-2*(arr[i][2]-'0');
         ans=ans+one[u];
         ans=ans+one[v];
         //33
          ans=ans+three[x];

    }

    if(arr[i].size()==4){
       /* if(f(arr[i])){
            ans++;
        }*/
        //22
        long long x=sum(arr[i]);
        long long u=x-2*(arr[i][0]-'0');
         long long v=x-2*(arr[i][3]-'0');
         ans=ans+two[u];
         ans=ans+two[v];
         //44
         ans=ans+four[x];

    }

    if(arr[i].size()==2){
      /*  if(f(arr[i])){
            ans++;
        }*/
        long long x=sum(arr[i]);
        ans=ans+two[x];
    }

    if(arr[i].size()==1){
        ans=ans+one[arr[i][0]-'0'];
    }
}


cout<<ans<<endl;




return 0;
}