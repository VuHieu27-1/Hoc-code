#include<iostream>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;
int a[1000][1000];
int main()
{
    int n, m, res = 0;
    cin >> n >> m;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        cout << max << endl;
        max = INT_MIN; 
    }
    return 0;
}