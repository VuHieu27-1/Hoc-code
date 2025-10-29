#include <iostream>
#include "Square.h"
using namespace std;
int main()
{
    Square c(10);
    c.toString();
    cout << c.getPerimeter() << endl;
    cout << c.getArea() << endl;
    c.set_canh(20);
    c.toString();
    cout << c.getPerimeter() << endl;
    cout << c.getArea() << endl;

}