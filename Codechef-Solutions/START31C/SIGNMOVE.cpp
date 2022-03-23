#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t; while (t--)
    {
        int n; cin >> n;
        int64_t p=0;
        cout << (n=n%2 ? -(int) ceil(n/2.0) : (int)ceil(n/2.0)) << "\n";
    }
    return 0;
}