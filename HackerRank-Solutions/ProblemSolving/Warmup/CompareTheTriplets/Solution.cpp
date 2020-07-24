#include<iostream>
using namespace std;

int main()
{
    int a0,a1,a2,b0,b1,b2;
    cin >> a0 >>a1 >>a2 >> b0 >> b1 >>b2;
    int alicePoint =0 ;
    int bobPoint = 0 ;

        if (a0 > b0) {
            alicePoint += 1;
        } else if (b0 > a0) {
            bobPoint += 1;
        } else {
            alicePoint += 0;
            bobPoint += 0;
        }

        if (a1 > b1) {
            alicePoint += 1;
        } else if (b1 > a1) {
            bobPoint += 1;
        } else {
            alicePoint += 0;
            bobPoint += 0;
        }

        if (a2 > b2) {
            alicePoint += 1;
        } else if (b2 > a2) {
            bobPoint += 1;
        } else {
            alicePoint += 0;
            bobPoint += 0;
        }

        cout << alicePoint << " " << bobPoint << endl;
    return 0;
}