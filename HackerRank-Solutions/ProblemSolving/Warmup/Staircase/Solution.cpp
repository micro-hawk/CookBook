// Staircase PATTERN forming in C++
// Copyright (c) MICROHAWK 2020
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << (i < n - j ? " " : "#");
        }
        cout<< "" <<endl;;
    }
    return 0;
}
