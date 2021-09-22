#include<iostream>
#include<vector>
using namespace std;
int main() {
    int cn; cin >> cn;
    vector<int> v; v.reserve(cn);
    for (int i = 1; i <= cn/2; i++)
    {
        if (cn%i == 0)
        {
            v.push_back(i);
        }
    }
    v.push_back(cn);
    cout << v.size() << "\n";
    for(const auto& el:v) {
        cout << el << " ";
    }
}