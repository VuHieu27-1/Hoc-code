#include<iostream>
#include <cmath>
#include<climits>
#include<vector>
#include <algorithm>
using namespace std;
int a[1000000];
int dp[1000000];
int main()
{
    int n , res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if(a[i - 1] < a[i])
        {
            res++; 
        }else
        {
            res = 0;
        }
    }
    if(res == n - 1)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    
}