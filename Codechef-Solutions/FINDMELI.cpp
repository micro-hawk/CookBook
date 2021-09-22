#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k; cin >> n>>k;
    vector<int> list; list.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int op; cin >> op;
        list.push_back(op);
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (k == list[i]){   flag = true; break;}
    }
    if (flag)
    {
        cout << "1";
    } else cout << "-1";
    
}