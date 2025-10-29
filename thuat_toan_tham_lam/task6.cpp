#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a + d == c + b || a + b + c == d)
    {
        cout << "YES" << endl;
    }
    else
    {
         cout << "NO" << endl;
    }
    return 0;
}