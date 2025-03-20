#include <bits/stdc++.h>
using namespace std;
void f(long long up,long long down,char s1,char s2,char t1,char t2,string &s){
    long long n=s.size();

    if(up>=down){
    long long x=(up-down)/2;
    long long l=0;
    if(x!=0){
    while(x>0){
        if(s[l]==s1){
            s[l]=t1;
            x--;
        }
        l++;
    }
    }
    else{
        long long i=0;
        while(i<n){
            if(s[i]==s1){
                s[i]=t1;
                break;
            }
            i++;
        }
         i=0;
        while(i<n){
            if(s[i]==s2){
                s[i]=t1;
                break;
            }
            i++;
        }
    }


    for(int i=0;i<n;i++){
        if(s[i]==s1 || s[i]==s2){
            s[i]=t2;
        }
    }
}
else{
    long long x=(down-up)/2;
    long long l=0;
    while(x>0){
        if(s[l]==s2){
            s[l]=t2;
            x--;
        }
        l++;
    }
    for(int i=0;i<n;i++){
        if(s[i]==s1 || s[i]==s2){
            s[i]=t1;
        }
    }
}
return ;
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
string s;
cin>>s;
long long up=0;
long long down=0;
long long left=0;
long long right=0;
for(int i=0;i<n;i++){
    if(s[i]=='N'){
        up++;
    }
    if(s[i]=='E'){
        right++;
    }
    if(s[i]=='W'){
        left++;
    }
    if(s[i]=='S'){
        down++;
    }

}
if(((up<=1 && down<=1 && left==0 && right==0) )||(abs(up-down))%2!=0){
    
    cout<<"NO"<<endl;
    continue;
}
if(((left<=1 && right<=1 && up==0 && down==0)) || (abs(left-right))%2!=0){
//cout<<left<<" "<<right<<endl;
   // cout<<"hi"<<endl;
    cout<<"NO"<<endl;
    continue;
}

f(up,down,'N','S','R','H',s);
//cout<<s<<endl;
f(right,left,'E','W','H','R',s);

cout<<s<<endl;


}
return 0;
}