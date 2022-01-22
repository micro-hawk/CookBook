#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v; 
        for (; n; n/=10)
        {
            v.push_back(n%10);
        }
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum += v[i];
        }
         cout << sum << "\n";
    }
    cout << endl;
    
}