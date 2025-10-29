#include<iostream>
#include<climits>  
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n , size = INT_MIN, end;
    cin >> n;
    vector<int> a(n), dp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dp[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if(a[i] * a[i - 1] < 0)
        {
            dp[i] = dp[i - 1] + 1;
        }else
        {
            dp[i] = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(dp[i] > size){
            size = dp[i];
            end = i;
        }
    }
    cout << size << endl;
    for (int i = end - size + 1; i <= end; i++)  
    {
        cout <<  a[i] << " ";
    }
}