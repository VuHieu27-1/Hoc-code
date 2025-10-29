#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int max = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
    if(a[0] * a[1] * a[2] * a[3] * a[n -1] > max)
    {
        max = a[0] * a[1] * a[2] * a[3] * a[n -1];
    }
    if(a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3] > max)
    {
        max = a[0] * a[1] * a[n - 1] * a[n - 2] * a[n - 3];
    }
    cout << max << endl;
    return 0;
}