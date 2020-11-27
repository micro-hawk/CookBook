#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n; cin >> n;
    v.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int input; cin >> input;
        v.push_back(input);
    }
    reverse(v.begin(), v.end());
    for(const auto e:v ){
        cout << e << " ";
    }
}