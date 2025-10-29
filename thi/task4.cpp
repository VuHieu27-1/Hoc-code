#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n, max = INT_MAX;
    cin >> n;
    vector<int> a(n);
    // vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < max && a[i] % 2 != 0)
        {
            max = a[i];
        }
    }
    if (max == INT_MAX)
    {
        cout << "No odd number found" << endl;
        return 0;
    }
    cout << max << endl;
    return 0;
}