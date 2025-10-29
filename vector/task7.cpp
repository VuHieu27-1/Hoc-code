#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    long long m, n,tong = 0, min = LLONG_MAX, max = LLONG_MIN;
    int dem_chan = 0, dem_le = 0;
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
            if(v[i][j] % 2 == 0)
            {
                dem_chan++;
            }else 
            {
                dem_le++; 
            }
        }
    }
    cout << dem_chan << " " << dem_le << endl;
    return 0;
}