#include "Personal.h"
using namespace std;
class Student: public Person
{
    private:
        string studentId;
        string nameSchool;
    public:
        Student() : Person()
        {
            studentId = "Unknow";
            nameSchool = "Unknow";
        }
        Student(string name, int age, string address, string studentId, string nameSchool) : Person(name, age, address)
        {
            this->studentId = studentId;
            this->nameSchool = nameSchool;
        }
        void set_id(string studentId)
        {
            this->studentId = studentId;
        }
        string get_id()
        {
            return studentId;
        }
        void set_school(string nameSchool)
        {
            this->nameSchool = nameSchool;
        }
        string get_school()
        {
            return nameSchool;
        }
        void input()
        {
            Person::input();
            cin >> studentId >> nameSchool;
        }
        void toString()
        {
            Person::toString();
            cout << "ID: " << studentId << " " << "Truong: " << nameSchool << endl;
        }
        void checkStudentId()
        {
            if(studentId == "23IT")
            {
                cout << "YES" << endl;
                return;
            }
            cout << "NO" << endl;
        }
};