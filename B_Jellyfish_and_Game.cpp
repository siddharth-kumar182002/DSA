#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m,k;
cin>>n>>m>>k;
vector<long long > a1(n);
vector<long long> a2(m);
for (int i = 0; i < n; i++)
{
    cin>>a1[i];
}
for (int i = 0; i < m; i++)
{
    cin>>a2[i];
}

sort(a1.begin(),a1.end());
sort(a2.begin(),a2.end());


 

//mina..........maxa
//minb..........maxb

//1st round
//mina>=maxb(no swap); maxi(last elemnt) stays with a   mini b->first;
//else(swap);if(maxa<maxb)maxi(first)else{last element} stays with a   mini b->if(min(a)<minb)-last elemenr)else{first element};

//2nd round
//it will swap its mini with maxi ;

if(a1[0]<a2[m-1]){
    swap(a1[0],a2[m-1]);
}

if(k%2!=0){
    long long temp=0;
    temp=accumulate(a1.begin(),a1.end(),temp);
    cout<<temp<<endl;
}
else{
     long long temp=0;
    temp=accumulate(a1.begin(),a1.end(),temp);
long long maxi;
long long mini;

    if(a1[0]>=a1[n-1]){
        maxi=a1[0];
    }
    else{
        maxi=a1[n-1];
    }

    if(a2[m-1]<=a2[0]){
          mini=a2[m-1];
    }
    else{
         mini=a2[0];
    }

    temp=temp-maxi+mini;
    cout<<temp<<endl;

}



}
return 0;
}