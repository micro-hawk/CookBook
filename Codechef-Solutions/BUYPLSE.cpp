#include<iostream>
using namespace std;
int main() {
    int pen, pencil;
    int pen_price, pencil_price;
    cin >> pen >> pencil >> pen_price >> pencil_price;
    int amount_pen, amount_pencil;
    int temp = pen*pencil*pencil_price*pen_price;
    if (temp > 0)
    {
        amount_pen = pen_price*pen;
        amount_pencil = pencil_price*pencil;
        cout << (amount_pencil + amount_pen);
    }
    
    return 0;
}