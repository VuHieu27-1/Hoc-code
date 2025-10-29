#include <iostream>
#include <ctype.h>
using namespace std;
class Person
{
    private:
        string name;
        int age;
        string address;
    public:
        Person()
        {
            name = "Unknow";
            age = 0;
            address = "Unknow";
        }
        Person(string name, int age, string address)
        {
            this->name = name;
            this->age = age;
            this->address = address;
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
        void set_address(string address)
        {
            this->address = address;
        }
        string get_address()
        {
            return address;
        }
        void toString()
        {
            cout << "Ten: " << name << " " << "Tuoi: " << age << " " << "Dia chi: " << address << " ";
        }
        void input()
        {
            cout << "Nhap thong tin: " << endl;
            cin >> name >> age >> address;
        }
        int getYearOfBirth()
        {
            return 2025 - this->age;
        }
        void getUpperName()
        {
            this->name = name;
            for (int i = 0; i < name.size(); i++)
            {
                name[i] = toupper(name[i]);
            }
            for (int i = 0; i < name.size(); i++)
            {
                cout << name[i];
            }
            cout << endl;
        }
        bool checkAge(int n)
        {
            if(this->age > n)
            {
                return 1;
            }
            return 0;
        }
};