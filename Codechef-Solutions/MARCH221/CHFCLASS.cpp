#include<iostream>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--)
    {
        int mdays; cin >> mdays;
        int output = mdays / 7;
        int x = mdays%7;
        if (x == 6) 
        {
            cout << output + 1 << endl;
        } else cout << output<<endl;
        
    }
    return 0;
}