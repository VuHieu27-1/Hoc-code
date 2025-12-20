#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include <climits>
using namespace std;
vector<int> b;
void sangnt (int a)
{
    b.resize(a + 1, 1);
    b[0] = b[1] = 0;
    for (int i = 2; i <= sqrt(a); i++)
    {
        if(b[i] == 1)
        {
            for (int j = i * i; j <= a; j += i)
            {
                b[j] = 0;
            }
        }
    }

}
int main()
{
    int a, max = INT_MIN;
    long long tong = 0;
    cin >> a;
    vector<int> c(a);
    for (int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < a; i++)
    {
        if(c[i] > max)
        {
            max = c[i];
        }
    }
    sangnt(max);
    for (int i = 0; i < a; i++)
    {
        if(c[i] >= 0 && b[c[i]] == 1)
        {
            tong += c[i];
        }
    }
    cout << tong << endl;
}