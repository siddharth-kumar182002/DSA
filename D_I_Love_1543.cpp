#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
  long long n,m;
    cin>>n>>m;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    
    long long top=0;
    long long down=n-1;
    long long left=0;
    long long right=m-1;
    long long ans=0;
    while(top<=down && left<=right){
        vector<char> temp;
      if(top<=down){
      for(int i=left;i<=right;i++){
        temp.push_back(arr[top][i]);
       // cout<<arr[top][i]<<" ";
      }
      }
      top++;
      if(left<=right){
      for(int i=top;i<=down;i++){
         temp.push_back(arr[i][right]);
     // cout<<arr[i][right]<<" ";
    }
      }
    right--;
    if(top<=down){
    for(int i=right;i>=left;i--){
         temp.push_back(arr[down][i]);
     // cout<<arr[down][i]<<" ";
    }
    }
    down--;
    if(left<=right){
    for(int i=down;i>=top;i--){
         temp.push_back(arr[i][left]);
    //  cout<<arr[i][left]<<" ";
    }
    }
    left++;
           long long x=temp.size();
           //cout<<x<<endl;
    for(int i=0;i<temp.size();i++){
        long long a=i%x;
        long long b=(i+1)%x;
        long long c=(i+2)%x;
        long long d=(i+3)%x;
        //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        if(temp[a]=='1' && temp[b]=='5' && temp[c]=='4' && temp[d]=='3'){
                    ans++;
        }
    }
    
    
    }
   /// cout<<endl;
    cout<<ans<<endl;
}
return 0;
}