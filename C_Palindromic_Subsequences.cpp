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
if(n==6){
    cout<<1<<" "<<1<<" "<<2<<" "<<3<<" "<<1<<" "<<2<<endl;
}
else if(n==7){
 cout<<3<<" "<<3<<" "<<7<<" "<<5<<" "<<3<<" "<<7<<" "<<7<<endl;

}
else if(n==8){
cout<<3<<" "<<3<<" "<<7<<" "<<5<<" "<<3<<" "<<7<<" "<<7<<" "<<1<<endl;

}
else if(n>=9 && n<=14){
    vector<long long> ans;
    int arr[9]={7,3,3,7,5,3,7,7,3};
    for(int i=1;i<=n;i++){
        if(ans.size()==(n-9)){
            break;
        }
        if(i==3 || i==7 || i==5){
            continue;
        }
        ans.push_back(i);
    }
    for(auto x:arr){
        ans.push_back(x);
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}
else{
    vector<long long> ans;
    int arr[15]={15,8,8,8,15,5,8,1,15,5,8,15,15,15,8};
    for(int i=1;i<=n;i++){
        if(ans.size()==(n-15)){
            break;
        }
        if(i==15 || i==8 || i==5 || i==1){
            continue;
        }
        ans.push_back(i);
    }
    for(auto x:arr){
        ans.push_back(x);
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}
}
return 0;
}