#include<iostream>
#include<math.h>
#include <vector>
using namespace std;
class Rectangle
{
    private:
        double width;
        double height;
    public:
    Rectangle()
    {
        width = 1;
        height = 1;
    }
    Rectangle(double width, double height)
    {
        this->width = width;
        this->height = height;
    }
    void Nhap()
    {
        cout << "Nhap gia tri: ";
        cin >> width >> height;
    }
    void setter_width(double width)
    {
        this->width = width;
    }
    void setter_height(double height)
    {
        this->height = height;
    }
    double getter_width()
    {
        return width;
    }
    double getter_height()
    {
        return height;
    }
    void ToString()
    {
        cout << "Chieu rong: " << width << " " << "Chieu dai:" << height << endl;
    }
    double Chu_vi()
    {
        return 2 * (width + height);
    }
};
int main()
{
    Rectangle HCM;
    Rectangle HCM1(10, 20);
    HCM1.ToString();
    cout << HCM1.Chu_vi() << endl;
    double new_height = HCM1.getter_height() * 2;
    HCM1.setter_height(new_height);
    HCM1.Chu_vi();
    cout << HCM1.Chu_vi() << endl;
    return 0;
}