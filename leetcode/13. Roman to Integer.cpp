#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> romanList{
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (romanList[s[i]] < romanList[s[i + 1]])
            {
                ans = ans - romanList[s[i]];
            }
            else
            {
                ans = ans + romanList[s[i]];
            }
        }
        return ans;
    }
};