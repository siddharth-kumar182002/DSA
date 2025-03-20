#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<long long> &arr) {
    if(arr.size()==0){
        return INT_MIN;
    }
    long long res = arr[0];
    long long maxEnding = arr[0];

    for (int i = 1; i < arr.size(); i++) {
      
  
        maxEnding = max(maxEnding + arr[i], arr[i]);

        res = max(res, maxEnding);
    }
    return res;
}
 

long long smallestSumSubarr(vector<long long> &arr)
{
      if(arr.size()==0){
        return INT_MAX;
    }
    long long n=arr.size();
 
    long long min_ending_here = INT_MAX;
     

    long long min_so_far = INT_MAX;
     

    for (int i=0; i<n; i++)
    {
   
        if (min_ending_here > 0)
            min_ending_here = arr[i];
         
    
        else
            min_ending_here += arr[i];
         
     
        min_so_far = min(min_so_far, min_ending_here);            
    }

    return min_so_far;
}
long long maxipref(vector<long long> &arr)
{

      if(arr.size()==0){
        return 0;
    }
    int prefix_sum = 0;
    int max_prefix_sum = INT_MIN;
    for (int i = 0; i <= arr.size()-1; i++) {
        prefix_sum += arr[i];
        max_prefix_sum = max(max_prefix_sum, prefix_sum);
    }

    return max_prefix_sum;
}
long long minipref(vector<long long> &arr)
{
 
    if(arr.size()==0){
        return 0;
    }
    int prefix_sum = 0;
    int mini_prefix_sum = INT_MAX;
    for (int i = 0; i <= arr.size()-1; i++) {
        prefix_sum += arr[i];
        mini_prefix_sum = min(mini_prefix_sum, prefix_sum);
    }

    return mini_prefix_sum;
}
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
vector<long long> brr;
vector<long long> crr;
long long x=0;
long long y=1;
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
    if(arr[i]!=1 && arr[i]!=-1){
        x=1;
        y=arr[i];
        continue;
    }
    if(x==0){
        brr.push_back(arr[i]);
    }
    else{
        crr.push_back(arr[i]);
    }

}
long long maxi=max(maxSubarraySum(brr),maxSubarraySum(crr));
//cout<<maxi<<endl;
long long mini=min(smallestSumSubarr(brr),smallestSumSubarr(crr));
//cout<<mini<<endl;
reverse(brr.begin(),brr.end());
long long a=maxipref(crr);
long long b=maxipref(brr);
long long maxinew=max({a,b,(a+b)});
//cout<<maxinew<<endl;
long long c=minipref(crr);
long long d=minipref(brr);
long long mininew=min({c,d,(c+d)});
//cout<<mininew<<endl;
set<long long> st;

for(int i=0;i<=maxi;i++){
    st.insert(i);
}
for(int j=mini ;j<=0;j++){
    st.insert(j);
}
if(y!=1){
    st.insert(y);
    st.insert(0);
for(int i=0;i<=maxinew;i++){
    st.insert(i+y);
}
for(int j=mininew ;j<=0;j++){
    st.insert(j+y);
}
}
cout<<st.size()<<endl;
for(auto x:st){
    cout<<x<<" ";
}
cout<<endl;

}
return 0;
}