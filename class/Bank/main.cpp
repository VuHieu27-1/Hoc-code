#include "menu.h"
using namespace std;
void show_menu()
{
    cout << "============================================" << endl;
    cout << "1. Nhap so tien cho tung tai khoan: " << endl;
    cout << "2. Chuyen tien: " << endl;
    cout << "3. Nap tien: " << endl;
    cout << "4. Rut tien: " << endl;
    cout << "0. Thoat: " << endl;
    cout << "============================================" << endl;
}
int main()
{
    show_menu();
    int i;
    cin >> i;
    while(i != 0)
    {
        menu(i);
        show_menu();
        cin >> i;
    }
    return 0;
}