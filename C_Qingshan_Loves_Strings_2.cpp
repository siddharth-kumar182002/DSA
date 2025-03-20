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
string s;
cin>>s;
vector<long long > arr;
if(n%2!=0){
    cout<<-1<<endl;
    continue;
}

//even 
    long long ch=0;
    long long f=0;
while(true){
     ch=0;
     n=s.size();
    for (int i = 0; i < n/2; i++)
    {
        //cout<<"i="<<i<<" "<<n-i-1<<endl;
       if(s[i]==s[n-i-1]){
        if(s[i]=='1'){
            s.insert(i,"01");
            arr.push_back(i);
            ch=1;
            break;
        }
        else{
        //cout<<"i="<<i<<" "<<n-i-1<<endl;
             s.insert(n-i,"01");
                 ch=1;
                 arr.push_back(n-i);
                 break;
        }
        }
    }
    if(arr.size()>300){
        f=1;
        break;
    }

    if(ch==0){
        break;
    }
    
}
if(f!=1){
    cout<<arr.size()<<endl;
    for(auto x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}
else{
    cout<<-1<<endl;
}





}
return 0;
}