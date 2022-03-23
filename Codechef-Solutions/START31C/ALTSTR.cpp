#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t; while (t--)
    {
        int n; cin >> n; string s; cin >> s;
        int c0=0, c1=0;
        for(int i=0; i<n; ++i) s[i] == '0' ? ++c0 : ++c1;
        int output_result = min (c0, c1) * 2;
        output_result += max(c0,c1) > min(c0,c1) ? 1 : 1;
        cout << output_result << endl;
    }
    return 0;
}