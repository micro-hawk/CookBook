// Complete the function solveMeFirst to compute the sum of two integers.

// Function prototype:

// int solveMeFirst(int a, int b);

// where,

//     a is the first integer input.
//     b is the second integer input

// Return values

//     sum of the above two integers

// Sample Input

// a = 2
// b = 3

// Sample Output

// 5

// Explanation

// The sum of the two integers
// and is computed as: 2+3=5 . 

#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    cin >>a >>b;
    sum = a+b;
    cout << sum;
    return 0;
}