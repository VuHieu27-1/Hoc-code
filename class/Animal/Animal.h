#include<iostream>
using namespace std;
class Animal
{  
    private:
        string name;
        int age;
    public:
        Animal()
        {
            name = "unknow";
            age = 0;
        }
        Animal(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
        void set_name(string name)
        {
            this->name = name;
        }
        string get_name()
        {
            return name;
        }
        void set_age(int age)
        {
            this->age = age;
        }
        int get_age()
        {
            return age;
        }
        void toString()
        {
            cout << "Ten: " << name << " " << "Tuoi: " << age << endl;
        }
        void input()
        {
            cout << "Nhap thong tin dong vat: " << endl;
            cin >> name >> age;
        }
        int getYearBirth()
        {
            int birth;
            birth = 2025 - this->age;
            return birth;
        }

};