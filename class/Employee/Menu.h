#include "Employee.h"
vector<Employee> employees;
void menu(int n)
{
    switch(n)
    {
        case 1:
            {
                cout << "Nhap danh sach: " << endl;
                Employee nhanvien;
                nhanvien.nhap();
                employees.push_back(nhanvien);
                break;
            }
        case 2:
            {
                cout << "Hien thi danh sach: " << endl;
                for (int i = 0; i < employees.size(); i++)
                {
                    employees[i].in();
                }
                break;
            }
        case 3: 
            {
                cout << "Tim kiem: ";
                string m;
                cin >> m;
                for (int i = 0; i < employees.size(); i++)
                {
                    if(m == employees[i].xuLy() || m == employees[i].get_name())
                    {
                        employees[i].in();
                    }
                }
                break;
            }
        case 4:
            {
                cout << "Nhap vao ID can xoa: ";
                int u;
                cin >> u;
                for (int i = 0; i < employees.size(); i++)
                {
                    if(u == employees[i].get_ID())
                    {
                        employees.erase(employees.begin() + i);
                    }
                }
            }
    }
}