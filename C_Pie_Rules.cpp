#include <bits/stdc++.h>
using namespace std;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);

vector<long long> nums;
  int a;
  while (std::cin >> a) {
    nums.push_back(a);
  }
 long long sz=nums.size();
 long long step=nums[sz-2];
 long long t=nums[sz-1];
 nums.pop_back();
 nums.pop_back();
 sz=sz-2;
int i=0;
int ind=0;
int cycle=1;
while(t--){
cout<<ind<<" "<<cycle<<" "<<nums[i]<<endl;
i=i+step;
if(i>(sz-1)){
    cycle++;
    i=i%sz;
}
ind++;
}



return 0;
}