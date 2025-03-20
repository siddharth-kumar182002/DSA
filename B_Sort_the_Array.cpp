#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
long long n;
cin>>n;

vector<long long> arr;
arr.push_back(-1);
long long f=0;
for (int i = 0; i <n; i++)
{
    long long x;
    cin>>x;
    arr.push_back(x);
}
arr.push_back(1e10);
vector<long long> ind;
for (int i = 1; i < arr.size(); i++)
{
    if(arr[i]<arr[i-1]){
        ind.push_back(i-1);
        while(arr[i]<arr[i-1]){
            i++;
        }
        i--;
        ind.push_back(i);
    }
}
if(ind.size()>2){
    cout<<"no"<<endl;
}
else if(ind.size()==2){

    if(arr[ind[0]-1]<=arr[ind[1]] && arr[ind[1]+1]>=arr[ind[0]]){
            cout<<"yes"<<endl;
            cout<<ind[0]<<" "<<ind[1]<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
}
else{
    cout<<"yes"<<endl;
    cout<<1<<" "<<1<<endl;
}

return 0;
}