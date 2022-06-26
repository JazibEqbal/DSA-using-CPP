#include <iostream>
using namespace std;
template <class T>
class Circle
{
private:
    T radius;

public:
    Circle(T r);
    T area();
    T circumfernce();
};
template <class T>
Circle<T>::Circle(T r)
{
    radius = r;
}
template <class T>
T Circle<T>::area()
{
    return 3.14 * radius * radius;
}
template <class T>
T Circle<T>::circumfernce()
{
    return 2 * 3.14 * radius;
}

int main()
{
    Circle<float> c(5);
    cout << c.area() << endl;
    cout << c.circumfernce() << endl;
}