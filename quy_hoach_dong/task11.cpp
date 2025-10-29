#include<iostream>
#include<climits>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n, index;
    cin >> n; 
    vector<int> a(n);
    vector<int> dp(n);
    vector<int> b(n);
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }  
    dp[0] = a[0];
    dp[1] = a[0] + a[1];
    for (int i = 2; i < n; i ++)
    {
        b[0] = -1;
        if(a[i - 2] > a[i - 1])
        {
            dp[i] = dp[i - 2] + a[i];
            b[i] = i - 2;
        }else{
            dp[i] = dp[i - 1] + a[i];
            b[i] = i - 1;
        }
    }
    index = n - 1;
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