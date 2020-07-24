#include<iostream>
using namespace std;
int main()
{
    int arr_size;
    cin >> arr_size;
    int arr[arr_size];
    for(int i=0; i< arr_size; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
    }

int sum=0;
    for(int i=0; i< arr_size; i++)
    {
        sum = sum+ arr[i];
    }

    cout << sum;

    return 0;
}