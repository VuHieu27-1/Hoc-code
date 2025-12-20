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
            b[i]++;
        }
    }
}
int main()
{
    int n, max = INT_MIN, res;
    cin >> n;
    sanguoc(n);
    for (int i = 1; i <= n; i++)
    {
        if(b[i] >= max)
        {
            max = b[i];
            res = i;
        }
    }
    cout << res << " " << max;
}