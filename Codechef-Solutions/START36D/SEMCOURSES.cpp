#include<iostream>
#define ll long long
using namespace std;
int main() {
    ll t; cin >> t; while (t--)
    {
       ll course,unit,chapter; cin >> course >> unit >> chapter;
        cout << course * unit * chapter << '\n';
    }
}