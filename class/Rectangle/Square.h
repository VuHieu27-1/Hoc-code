#include <iostream>
#include "Rectangle.h"
using namespace std;
class Square : public Rectangle
{
    public:
        Square() : Rectangle()
        {}
        Square(float canh) : Rectangle(canh, canh)
        {
        }
        void set_canh(float canh)
        {
            Rectangle ::set_width(canh);
            Rectangle ::set_heigth(canh);
        }
        float  get_canh()
        {
            return Rectangle ::get_width();
        }
        void toString()
        {
            cout << get_canh() << endl;
        }
        void input()
        {
            cout << "Nhap canh: " << endl;
            float c;
            cin >> c;
            set_canh(c);
        }
}; 