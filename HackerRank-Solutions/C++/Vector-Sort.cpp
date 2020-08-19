#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n; cin >> n;
    vector <int> v;
    v.reserve(n);
    for (int i = 0; i < n; i++)
    {
        int input; cin >> input;
        v.push_back(input);
    }
    // for (const auto& e:v){
    //     cout << e << " ";
    // } cout << endl;
    
    sort(v.begin(), v.end());
    for(const auto& x:v){
        cout << x << " " ;
    }
    return 0;
}