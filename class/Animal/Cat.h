#include<iostream>
#include"Animal.h"
using namespace std;
class Cat : public Animal 
{
    private:
        string color;
        string breed;
    public:
        Cat() : Animal()
        {
            color = "Unknow";
            breed = "Unknow";
        }
        Cat(string name, int age, string color, string breed) : Animal(name, age)
        {
            this->color = color;
            this->breed = breed;
        }
        void set_color(string color)
        {
            this->color = color;
        }
        string get_color()
        {
            return color;
        }
        void set_breed(string breed)
        {
            this->breed = breed;
        }
        string get_breed()
        {
            return breed;
        }
        void toString()
        {
            Animal::toString();
            cout << "Mau: " << color << " " << "Gioi tinh: " << breed << endl;
        }
        void input()
        {
            Animal::input();
            cin >> color >> breed;
        }
        bool equalBreed (Cat c)
        {
            if(this->breed == c.breed)
            {  
                return 1;
            }
            return 0;
        }
};