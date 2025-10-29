#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long a, b, n, m, x1, x2, k1, dem;
    cin >> m >> n >> a >> b;
    x1 = (m - b)/a;
    x2 = (n - b)/a;
    if((x1 * a) + b < m)
    {
        k1 = x1 + 1;
    }
    else
    {
        k1 = x1;  
    }
    cout << k1 << " " << x2 << endl;
    dem = x2 - k1 + 1;
    cout << dem << endl;
    return 0;
}