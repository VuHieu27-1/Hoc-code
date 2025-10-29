#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;
int main ()
{
    long long n, max = LLONG_MIN, tong;
    cin >> n;
    vector<long long> a(n);
    vector<long long> dp(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    dp[0] = a[0];
    dp[1] = a[1] + a[0];
    for (int i = 2; i < n; i++)
    {
        if(dp[i - 1] >= dp[i - 2])
        {
            dp[i] = dp[i - 1] + a[i];
        }else 
        {
            dp[i] = dp[i - 2] + a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        max = dp[n - 1];
    }
    cout << max << endl;

    return 0;
}