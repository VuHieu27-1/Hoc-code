#include<iostream>
using namespace std;
class Rectangle
{
    protected:
        float width;
        float height;
    public:
        Rectangle()
        {
            width = 0;
            height = 0;
        }
        Rectangle(float width, float height)
        {
            this->width = width;
            this->height = height;
        }
        void set_width(float width)
        {
            this->width = width;
        }
        float get_width()
        {
            return width;
        }
        void set_heigth(float height)
        {
            this->height = height;
        }
        float get_height()
        {
            return height;
        }
        void toString()
        {
            cout << "Chieu dai: " << width << " " << "Chieu rong: " << height << endl;
        }
        void input()
        {
            cout << "Nhap gia tri: " << endl;
            cin >> width >> height;
        }
        float getArea()
        {
            float S;
            S = width * height;
            return S;
        }
        float getPerimeter()
        {
            float C;
            C = 2 * (width + height);
            return C;
        }
};