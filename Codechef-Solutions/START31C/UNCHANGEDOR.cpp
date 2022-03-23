#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t; while (t--)
    {
        int n; cin >> n;
        int f=1, sum = 0 ;
        int l = (int)log2(n);
        int ans = 0;
        for (int i = 1; i < l; i++)
        {
            sum += f;
             f *= 2;
             ans += sum;
        }
        ans += (n-(int)pow(2,1));
        cout << ans << endl;        
    }
    return 0;
}