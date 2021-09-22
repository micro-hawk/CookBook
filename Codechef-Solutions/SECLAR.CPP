#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> v;
    v.reserve(3);
    for(int i=0; i<3; i++) {
        int ip; cin >> ip;
        v.push_back(ip);
    }
    sort(v.begin(), v.end());
    cout << v[1];
    return 0;
}
