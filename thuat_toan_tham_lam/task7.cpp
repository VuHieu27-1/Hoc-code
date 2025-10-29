#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    long long n, m, tong = 0, dem = 0;
    cin >> n >> m; 
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i <= n - 1; i++)
    {
        tong += a[i];
        if (tong > m)
        {
            tong -= a[i];
            break;
        }
        dem++;
    }
    cout << tong << " " << dem <<  endl;
    return 0;
}