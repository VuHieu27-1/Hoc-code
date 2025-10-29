#include "Menu.h"
#include <math.h>
using namespace std;
void show_menu()
{
    cout << "1. Nhap danh sach: " << endl;
    cout << "2. Hien thi danh sach: " << endl;
    cout << "3. Tim kiem: " << endl;
    cout << "4. Nhap vao ID can xoa: " << endl;
    cout << "0. Thoat: " << endl;
}
int main()
{
    int n = 0;
    string m = "";
    show_menu();
    cin >> m;
    for (int i = 0; i < m.size(); i++)
    {
        n = n*10 + (m[i] - 48);
    }
    cout << m << endl;
    while (n != 0)
    {
        if (m.size() > 20)
        {
            show_menu();
            n = 0;
            cin >> m;
            for (int i = 0; i < m.size(); i++)
            {
                n = n*10 + (m[i] - 48);
            }
            cout << n << endl;
        }
        menu(n);
        n = 0;
        show_menu();
        cin >> m;
        for (int i = 0; i < m.size(); i++)
        {
            n = n*10 + (m[i] - 48);
        }
    }
}