#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

long long n,k;
cin>>n>>k;

if(n<3*k){
    cout<<-1<<endl;
    return 0;
}
// 1 2 3 4 5 6 7 8 9 10 11
// 3 2 1 2 1 3 3 2 1 2 1 3

vector<long long > arr;
vector<long long > arr1;
for (int i = 0; i < k; i++)
{
    arr.push_back(i+1);
    arr1.push_back(k-i);
}
if(k%2!=0){
swap(arr1[0],arr1[k/2]);
}

int f=0;
while(n>0){

long long l=0;
if(f==0){
while(l<k && n>0){
    cout<<arr[l]<<" ";
    l++;
    n--;
}
 f=1;
}
else{
    while(l<k && n>0){
    cout<<arr1[l]<<" ";
    l++;
    n--;
}
 f=0;
}

}




return 0;
}