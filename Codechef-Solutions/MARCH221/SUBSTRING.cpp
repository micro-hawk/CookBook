#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while (t--)
    {
        string s; cin >> s; 
        ll len = s.length();
        ll count=0, result=0;
        for (int i = 1; i < len-1; i++)        {
            if (s[i] != s[0] and s[i] != s[len-1]){
                count++;
            } else count=0;
            
            result = max(count, result);
        }
        if (result == 0)
        {
            cout << -1 << endl;
        } else cout << result << endl;
        
    }
    
}