// @MICROHAWK 2020;
#include <iostream>

using namespace std;
class Rectangle
{
protected:
    int width, height;

public:
    void display()
    {
        cout << width << " " << height << endl;
    }

    void read_input()
    {
        cin >> width >> height;
    }
};
class RectangleArea : public Rectangle
{
public:
    void display()
    {
        cout << width * height;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;

    /*
     * Read the width and height
     */
    r_area.read_input();

    /*
     * Print the width and height
     */
    r_area.Rectangle::display();

    /*
     * Print the area
     */
    r_area.display();

    return 0;
}