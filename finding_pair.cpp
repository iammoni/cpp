
Question: You are given a and b and perform operation a=b-a b=a+b find value of a and b after n operations.

#include <iostream>
 
using namespace std;
const int INF = 1e9;
const int MOD = 1e9 + 7;
 
long long mpow(long long a, long long b) {
    long long ret = 1;
    while (b) {
        if (b & 1) ret = (ret * a) % MOD;
        b >>= 1;
        a = (a * a) % MOD;
    }
    return ret;
}
 
int main() {
    int t, a, b, n;
    long long x, a1, b1;
    cin>>t;
    while (t--) {
        cin>>a>>b>>n;
        n--;
        x = mpow(2, n / 2);
        if (n % 2) {
            a1 = (x*b - x*a) % MOD;
            b1 = (x*b + x*a) % MOD;
        }
        else {
            a1 = (x * a) % MOD;
            b1 = (x * b) % MOD;
        }
        cout << a1 << ' ' << b1 << endl;
    }
    return 0;
}