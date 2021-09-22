#include<bits/stdc++.h>
using namespace std;
int main() {
    int l, r; cin >> l >> r;
    vector<int> oddList;
    for (int i = l; i <= r; i++)
    {
        if(i%2 != 0) oddList.push_back(i);
    }
    sort(oddList.begin(), oddList.end());
    for(const auto& element : oddList) cout << element << " ";
}