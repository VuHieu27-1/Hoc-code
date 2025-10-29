#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Employee
{
    private:
        string name;
        int age;
        int ID;
        string gender;
    public:
        Employee()
        {
            name = "Unknow";
            age = 0;
            ID = 0;
            gender = "Unknow";
        }
        Employee(string name, int age, int ID, string gender)
        {
            this->name = name;
            this->age = age;
            this->ID = ID;
            this->gender = gender;
        }
        void set_name(string name)
        {
            this->name = name;
        }
        string get_name()
        {
            return name;
        }
        void set_name(int age)
        {
            this->age = age;
        }
        int get_age()
        {
            return age;
        }
        void set_ID(int ID)
        {
            this->ID = ID;
        }
        int get_ID()
        {
            return ID;
        }
        void set_gender(string gender)
        {
            this->gender = gender;
        }
        string get_gender()
        {
            return gender;
        }
        void nhap()
        {
            cout << "Ten: ";
            cin >> name;
            cout << "Tuoi: ";
            cin >> age;
            cout << "ID: ";
            cin >> ID;
            cout << "Gioi Tinh: ";
            cin >> gender;
        }
        void in()
        {
            cout << name << " " << age << " " << ID << " " << gender << endl;
        }
        string xuLy()
        {
            this->ID = ID;
            int x, m;
            string a = "";
            m = ID;
            while(ID != 0)
            {
                x = ID % 10;
                a = a + (char)(x + 48);
                ID /= 10;
            }
            reverse(a.begin(), a.end());
            ID = m;
            return a;
        }

};
