#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n, index, max = INT_MIN;
    cin >> n;
    vector<int> a(n);
    vector<int> dp(n);
    vector<int> b(n);
    vector<int> c;
    dp[0] = 1;
    index = n - 1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        b[0] = -1;
        dp[i] = 1;
        for (int j = 0; j <= i - 1; j++)
        {
            if(a[i] > a[j])
            {
                if(dp[i] < dp[j] + 1)
                {
                    dp[i] = dp[j] + 1;
                    b[i] = j;
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(dp[i] > max)
        {
            max = dp[i];
            index = i;
        }
    }
    while(index != -1)
    {
        c.push_back(a[index]);
        index = b[index];
    }
    for (int i = c.size() - 1; i >= 0; i--)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++)
    {
        cout << dp[i] << " ";
    }
}