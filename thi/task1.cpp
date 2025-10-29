#include <iostream>
#include <cmath>  
using namespace std;
int main()
{
    int n, tong = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
            tong *= i;
            cout << i ;
            if(i == n)
            {
                break;
            }
            cout << " * ";
    }
    cout << " = " << tong << endl;
    return 0;
}