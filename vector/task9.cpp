#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    long long m, n,tong = 0, min = LLONG_MAX, max = LLONG_MIN;
    int res = max , a ;
    vector<int> tong1;
    cin >> m >> n;
    vector<vector<int>> v(m, vector<int>(n));
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cin >> v[i][j];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tong += v[i][j];
        }
        if(tong > max)
        {
            max = tong;
            a = i;
        }
        tong = 0;
    }
    for (int j = 0; j < n; j++)
    {
        cout << v[a][j] << " ";
    }
    return 0;

}