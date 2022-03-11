#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int r_num = 0;
        while (n)
        {
            r_num = r_num * 10 + (n%10);
            n = n/10;
        }
        cout << r_num << "\n";
        
    }
    
}