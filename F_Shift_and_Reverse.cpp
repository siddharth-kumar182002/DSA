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
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

long long it1=-1;
long long count=0;
if(arr[0]<arr[n-1]){
    it1=n-1;
    count++;
}
//3 4 5 6 1 2 
//6 5 4 3 2 1 7
for (int i = 1; i < n; i++)
{
    if(arr[i]<arr[i-1]){
        it1=i-1;
        count++;
    }
}

//////////
long long it2=-1;
long long count1=0;
if(arr[0]>arr[n-1]){
    it2=n-1;
    count1++;
}
for (int i = 1; i < n; i++)
{
    if(arr[i]>arr[i-1]){
        it2=i-1;
        count1++;
    }
}
//cout<<"c"<<count<<" "<<it1<<endl;
//cout<<"c1"<<count1<<" "<<it2<<endl;
if(count==0 || count1==0){
    cout<<0<<endl;
    continue;
}
if(count!=1 && count1!=1){
    cout<<-1<<endl;
}
else{
    long long ans1=INT_MAX;
    long long ans2=INT_MAX;
    long long ans3=INTMAX_MAX;
   long long ans4=INT_MAX;
    if(count==1){
     ans1=it1+3;
     ans2=n-it1-1;
    }
    if(count1==1){
     ans3=it2+2;
     ans4=n-it2;
    }
    //cout<<ans1<<" "<<ans2<<" "<<ans3<<" "<<ans4<<endl;
    cout<<min({ans1,ans2,ans3,ans4})<<endl;
}

}
return 0;
}