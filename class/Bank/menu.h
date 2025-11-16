#include "Bank.h"
using namespace std;
Bank banker;
void menu(int n)
{
    switch(n)
    {
        case 1:
            {
                cout << "Nhap so tien cho tung tai khoan: ";
                banker.nhaptien();
                banker.in();
                break;
            }
        case 2: 
            {
                while(banker.getbank().size() <= 1)
                {
                    cout << "Khong du tai khoan de giao dich. " << endl;
                    cout << "Nhap so tien cho tung tai khoan: ";
                    banker.nhaptien();
                }
                int a, b;
                long long tien;
                cout << "Tai khoan chuyen tien: ";
                cin >> a;
                cout << "Tai khoan nhan tien: ";
                cin >> b;
                cout << "So tien can chuyen: ";
                cin >> tien;
                while(!banker.transfer(a, b, tien))
                {
                    cout << "Tai khoan chuyen tien: ";
                    cin >> a;
                    cout << "Tai khoan nhan tien: ";
                    cin >> b;
                    cout << "So tien can chuyen: ";
                    cin >> tien;
                }
                banker.in();
                break;
            }
        case 3:
            {
                int a;
                long long tien;
                cout << "Tai khoan nap tien: ";
                cin >> a;
                cout << "So tien nap: ";
                cin >> tien;
                while(!banker.deposit(a, tien))
                {
                    cout << "Tai khoan nap tien: ";
                    cin >> a;
                    cout << "So tien nap: ";
                    cin >> tien;
                }
                banker.in();
                break;
            }
        case 4:
            {
                int a;
                long long tien;
                cout << "Tai khoan rut tien: ";
                cin >> a;
                cout << "So tien rut: ";
                cin >> tien;               
                while(!banker.withdraw(a, tien))
                {
                    cout << "Tai khoan rut tien: ";
                    cin >> a;
                    cout << "So tien rut: ";
                    cin >> tien; 
                }
                banker.in();
                break;
            }
    }
}