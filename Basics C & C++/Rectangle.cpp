#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        int p;
        p = 2 * (length + breadth);
        return p;
    }
    // void changeLength(int l)
    // {
    //     length = l;
    // }
};
int main()
{
    Rectangle r(10, 5);
    // r.area();
    // r.changeLength(20);
    cout << "Area is: " << r.area() << endl;
    cout << "Perimeter is: " << r.perimeter() << endl;
    return 0;
}