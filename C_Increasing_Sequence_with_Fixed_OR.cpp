#include <bits/stdc++.h>
using namespace std;

// function to convert decimal to binary
string f(long long n)
{
    
    string x="";
    while (n > 0) {

        // storing remainder in binary array
        long long r= n % 2;
        if(r==1){
            x=x+'1';
        }
        else{
            x=x+'0';
        }
        n = n / 2;
    }

    reverse(x.begin(),x.end());
    return x;
}

// Function to convert binary to decimal
long long func(string n)
{
    string num = n;
    long long dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    long long base = 1;
 
    long long len = num.length();
    for (long long i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
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

string s=f(n);
//cout<<s<<endl;

set<long long> arr;
s='0'+s;
long long r=s.size();
for (int i = s.size()-1; i >=0; i--)
{
        if(s[i]=='0'){
            long long d=r-i-1;
           // cout<<d<<endl;
            while(d>=0){
                long long count=0;
                string temp=s;
                char y;
                if(d%2==0){
                      y='1';
                }
                else{
                    y='0';
                }
               // cout<<"d="<<d<<endl;
               // cout<<s<<endl;
            for (int j = r-1; j >=(i+1); j--)
            {
                //cout<<"d="<<d<<endl;
                //cout<<j<<endl;
                   if(count==d){
                    break;
                   }
                   temp[j]=y;
                    if(y=='0'){
                      y='1';
                }
                else{
                    y='0';
                }
                  count++;
            }
            //cout<<temp<<endl;
            long long z=func(temp);
            if(z!=0){
                  arr.insert(z);
            }
                    
                d--;
            }
            r=i;
        }
}


cout<<arr.size()<<endl;
for(auto x:arr){
    cout<<x<<" ";
}
cout<<endl;

}
return 0;
}