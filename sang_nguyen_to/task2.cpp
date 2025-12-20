#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<int> c;
void sangnt(int a, int b)
{
    c.resize(b + 1, 1);
    if(a == 0 || a == 1)
    {
        c[a] = 0;
    }
    for (int i = 2; i <= sqrt(b); i++)
    {
        if(c[i] == 1)
        {
            for (int j = i * i; j <= b; j += i)
            {
                c[j] = 0;
            }
        }
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    sangnt(a, b);
    for (int i = a; i <= b; i++)
    {
        if(c[i] == 1)
        {
            cout << i << " ";
        }
    }
}