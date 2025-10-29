#include "Student.h"
using namespace std;
int main()
{
    Student a;
    a.input();
    a.toString();
    cout << a.checkAge(18) << endl;
    a.getUpperName();
    a.checkStudentId();
} 
