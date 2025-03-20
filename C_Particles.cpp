#include <bits/stdc++.h>
using namespace std;

long long f(vector<long long> arr)
{
    if(arr.size()==0){
        return INT_MIN;
    }
    long long sum = 0;
    long long max = *max_element(arr.begin(),arr.end());
 
    if (max <= 0) {
        return max;
    }

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    long long t;
    cin>>t;
	while(t--){
long long n;
cin>>n;
vector<long long> a(n);
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}
//cout<<f(a)<<endl;
vector<long long> b;
for (int i = 0; i <n; i=i+2)
{
    b.push_back(a[i]);
}
vector<long long > c;
for (int i = 1; i < n; i=i+2)
{
    c.push_back(a[i]);
}
cout<<max(f(b),f(c))<<endl;



 }
	return 0;
}