#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    int n, max = INT_MIN;
    cin >> n;
    vector<int> a(n);
    // vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] % 2 == 0 )
    //     {
    //         b.push_back(a[i]);
    //     }
    // }
    // sort(b.begin(), b.end());
    // if (b .empty())
    // {
    //     cout << "No even number found" << endl;
    //     return 0;
    // }

    // cout << b.back() << endl;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max && a[i] % 2 == 0)
        {
            max = a[i];
            cout << max << endl;
        }
    }
    if (max == INT_MIN)
    {
        cout << "No even number found" << endl;
        return 0;
    }
    cout << max << endl;
    return 0;
}