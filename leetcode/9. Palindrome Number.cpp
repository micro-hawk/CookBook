#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        ostringstream str1;
        str1 << x;
        string tempS = str1.str();
        int len = tempS.length();

        for (int i = 0; i < len / 2; i++)
        {
            if (tempS[i] != tempS[len - i - 1])
                return false;
        }
        return true;
    }
};