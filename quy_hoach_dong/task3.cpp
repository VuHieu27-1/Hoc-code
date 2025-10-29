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
    if(a[0] % 2 != 0)
    {
        dp[0] = 1;
    }else
    {
        dp[0] = 0;
    }
    for (int i = 1; i < n; i++)
    {

        if(a[i] >= a[i - 1] && a[i] % 2 != 0)
        {
            dp[i] = dp[i - 1] + 1;
        }else if (a[i] < a[i - 1] && a[i] % 2 != 0)
        {
            dp[i] = 1;
        }else{
            dp[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(dp[i] > size){
            size = dp[i];
            end = i;
        }
    }
    if(size == 0)  
    {                
        cout << "No odd number" << endl;
        return 0;
    }
    for (int i = end - size + 1; i <= end; i++)  
    {
        cout <<  a[i] << " ";
    }
}