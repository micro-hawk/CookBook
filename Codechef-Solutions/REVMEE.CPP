#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> list;
    int n; cin >> n; list.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int op; cin >> op; 
        list.push_back(op);
    }
    reverse(list.begin(), list.end());
    for(const auto& element:list) cout << element << " ";
}