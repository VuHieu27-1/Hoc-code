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
    int max_1 = INT_MIN;
    int max_2 = INT_MIN;
    int max_3 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max_1 && a[i][j] < max)
            {
                max_1 = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max_2 && a[i][j] < max_1)
            {
                max_2 = a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max_3 && a[i][j] < max_2)
            {
                max_3 = a[i][j];
            }
        }
    }
    if (max_3 == INT_MIN)
    {
        cout << "No fourth maximum" << endl;
        return 0;
    }
    cout <<  max_3 << endl;
    return 0;
}