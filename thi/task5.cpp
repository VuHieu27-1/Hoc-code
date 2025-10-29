#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n, max = INT_MIN , max_1 = INT_MIN, max_2 = INT_MIN, max_3 = INT_MIN;
    cin >> n;
    vector<int> a(n);
    // vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max && a[i] % 2 == 0)
        {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_2 && a[i] % 2 != 0)
        {
            max_2 = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_1 && a[i] < max && a[i] % 2 == 0)
        {
            max_1 = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max_3 && a[i] < max_2 && a[i] % 2 != 0)
        {
            max_3 = a[i];
        }
    }
    if (max_1 == INT_MIN || max_3 == INT_MIN)
    {
        cout << "Not enough numbers found" << endl;
        return 0;
    }
    cout << max_1 + max_3 << endl;
    return 0;
}