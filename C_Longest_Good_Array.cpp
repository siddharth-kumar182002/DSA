#include <bits/stdc++.h>
using namespace std;
// Prints roots of quadratic equation
// ax*2 + bx + x
void findRoots(long long a, long long b, long long c)
{
    // If a is 0, then equation is
    // not quadratic, but linear
    if (a == 0) {
        cout << "Invalid";
        return;
    }

    long long d = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(d));

    if (d > 0) {
        
        cout << (int)((double)(-b + sqrt_val) / (2 * a))+1 <<endl;
         
    }
    else if (d == 0) {
        cout << "Roots are real and same ";
        cout << -(double)b / (2 * a);
    }

    // d < 0
    else {
        cout << "Roots are complex ";
        cout << -(double)b / (2 * a) << " + i"
             << sqrt_val / (2 * a) << " "
             << -(double)b / (2 * a) << " - i"
             << sqrt_val / (2 * a);
    }
}
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(__null);
int t;
cin>>t;
while(t--){
long long l,r;
cin>>l>>r;
long long c=-2*(r-l);
 findRoots(1LL, 1LL, c);
}
return 0;
}