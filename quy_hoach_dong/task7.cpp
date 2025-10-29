#include<iostream>
#include<climits>  
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    long long n , size = LLONG_MIN, end;
    cin >> n;
    vector<long long> a(n), dp(n);
    for (int i = 0; i < n; i++)     
    {
        cin >> a[i];
    }
    if((long long)(sqrt(a[0])) * (long long)(sqrt(a[0])) == a[0] && a[0] % 2 == 0)
    {
        dp[0] = 1; 
    }else
    {
        dp[0] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        if((long long)(sqrt(a[i])) * (long long)(sqrt(a[i])) == a[i] && a[i] % 2 == 0)
        {
        dp[i] = dp[i - 1] + 1;
        if((long long)(sqrt(a[i])) * (long long)(sqrt(a[i])) == a[i] && a[i] % 2 == 0 && a[i] > a[i - 1])
        {
            dp[i] = dp[i - 1] + 1;
        }else
        {
            dp[i] = 1;
            // continue;
        }
        }
        else{
            dp[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
        {
            if (dp[i] > size)
            {
                size = dp[i];
                end = i;
            }
        }
    if(size == 0)  
    {                
        cout << "-1" << endl;
        return 0;
    }
    cout << size << endl;
    for (int i = end - size + 1; i <= end; i++)  
    {
        cout <<  a[i] << " ";
    }
}