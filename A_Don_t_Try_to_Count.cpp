#include <bits/stdc++.h>
using namespace std;
int countFreq(string& pat, string& txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        /* For current index i, check for
           pattern match */
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
 
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M) {
            res++;
        }
    }
    return res;
}
 
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long n,m;
cin>>n>>m;
string x,s;
cin>>x>>s;
long long ans=0;
long long f=0;
while(x.size()<=25*m){
    if(countFreq(s,x)){
       cout<<ans<<endl;
       f=1;
       break;
    }
    else{
        ans++;
        x+=x;
       // cout<<x<<endl;
    }
}
if(f!=1){
    cout<<-1<<endl;
}
}
return 0;
}