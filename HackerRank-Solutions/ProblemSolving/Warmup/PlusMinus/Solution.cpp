#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    int counter_negative = 0;
    int counter_zero = 0;
    int counter_positive = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] == 0)
        {
            counter_zero++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            counter_negative++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (a[i] > 0)
        {
            counter_positive++;
        }
    }

    double zero_f = (double)counter_zero / size;
    double negative_f = (double)counter_negative / size;
    double positive_f = (double)counter_positive / size;

    printf("%.6f\n%.6f\n%.6f", positive_f, negative_f, zero_f);
    return 0;
}