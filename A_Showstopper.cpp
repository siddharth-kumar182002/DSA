#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
cin>>t;
while(t--){
int n;
cin>>n;
vector<int> a(n);
vector<int> b(n);
int max1=-1;
int max2=-1;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
for (int i = 0; i < n; i++)
{
    cin>>b[i];

}
for (int i = 0; i < n-1; i++)
{
    if(a[n-1]>=b[n-1]){
    if(b[i]>b[n-1]){
        swap(b[i],a[i]);
    }
    }
    else{
         if(a[i]>a[n-1]){
     swap(b[i],a[i]);
    }
    }
}

for (int i = 0; i < n; i++)
{
    max1=max(max1,a[i]);
    max2=max(max2,b[i]);

}


if(max1==a[n-1] && max2==b[n-1]){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}






}
return 0;
}