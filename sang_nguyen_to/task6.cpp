#include<iostream>
#include<vector>
#include<math.h>
#include<climits>
using namespace std;
vector<int> b;
void sanguoc(int n)
{
    b.resize(n + 1, 1);
    for (int index = 2; index <= n; index++)
    {
        for (int i = index; i <= n; i += index)
        {
            b[i] += index;
        }
    }
}
int main()
{
    int n, max = INT_MIN, res = 0;
    cin >> n;
    sanguoc(n);
    for (int i = 1; i <= n; i++)
    {
        if(b[i] >= 2 * i)
        {
            res++;
        }
    }
    cout << res;
}