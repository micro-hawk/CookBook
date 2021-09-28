#include<bits/stdc++.h>
using namespace std;
bool checkValid(int a, int b, int c) {
    if(a + b <= c || a+c <= b || b+c <= a ) return false;
    else return true;
}

int main() {
    int a,b,c; cin >> a >> b>> c;
    if(checkValid(a,b,c))     cout << "YES";
    else cout << "NO";
}