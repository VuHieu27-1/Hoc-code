#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    vector<int> a(x + y + z);
    for (int i = 0; i < x; i++)
    {
        a[i] = 1;
    }
    for (int i = 0; i < y; i++)
    {
        a[x + i] = 2;
    }
    for (int i = 0; i < z; i++)
    {
        a[x + y + i] = 3;
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}