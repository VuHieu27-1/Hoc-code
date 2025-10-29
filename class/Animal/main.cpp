#include <iostream>
#include "Cat.h"
using namespace std;
int main()
{
    Cat c1, c2;
    c1.input();
    c2.input();
    c1.toString();
    c2.toString();
    cout << c2.equalBreed(c1) << endl;
    cout << c2.getYearBirth() << endl;

}