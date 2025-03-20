#include <bits/stdc++.h>
using namespace std;

double n,k;
vector<double> arr;


bool f(double x){
    double s=0;
for (int i = 0; i < n; i++)
{
    s=s+floor(arr[i]/x);
}
return s>=k;

}


int main() {

cin>>n>>k;
for (int i = 0; i < n; i++)
{
    double temp;
    cin>>temp;
    arr.push_back(temp);
}

double l=0;
double r=1e8;
double mid;

for (int i = 0; i < 100; i++)
{
    mid=(l+r)/2;
    if(f(mid)){
        l=mid;
    }
    else{
        r=mid;
    }
}

cout<<setprecision(20)<<l<<endl;




return 0;
}