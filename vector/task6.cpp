#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    long long m, n,tong = 0, min = LLONG_MAX, max = LLONG_MIN;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cin >> v[i][j];
    }
    // for (int i = 0; i < m; i++)
    // {
    //     cout << v[i][n - 1] << endl;
    // }
    // cout << tong << endl ;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(v[i][j] < min)
            {
                min = v[i][j];
            }
            if(v[i][j] > max)
            {
                max = v[i][j];
            }
        }
    }
    cout << max << " " << min << endl;
    return 0;
}