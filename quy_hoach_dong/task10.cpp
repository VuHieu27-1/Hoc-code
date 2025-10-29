#include <iostream>
#include <climits>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> dp(n);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        int max = INT_MIN;
        for (int j = 0; j < i; j++)   // Trước khi đến i thì dãy có thể bắt đầu từ j
        {
            if(a[i] > a[j])
            {
                if(dp[j] > max)
                {
                    max = dp[j]; 
                }
            }
        }
        if(max > INT_MIN)
        {
        dp[i] = max + 1;
        }
        else
        {
            dp[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dp[i] << endl;
    }
    return 0;
}