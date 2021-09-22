#include<iostream>
using namespace std;
int main()  {
    int n; cin >> n;
    bool flag = false;
    if (!flag)
    {
        if (n%5==0 && n%11 == 0)
        {
            cout << "BOTH";
        } else if (n%5 == 0 || n%11==0)
        {
            flag = true;
        }
        else if (n%5!=0 && n%11!=0)
        {
            cout << "NONE";
        }
        
    }

    if (flag)
    {
        cout << "ONE";
    }
        return 0;
}