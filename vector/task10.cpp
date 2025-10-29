#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    long long m;
    cin >> m;
    vector<vector<int>> v(m, vector<int>());
    for (int i = 0; i < m; i++)
    {
        v[i] = vector<int>(i + 1, i + 1);
    }
    for(auto x : v)
    {
        for(auto y : x)
        cout << y << " ";
        cout << endl;
    }
        // vector<vector<int>> v(m);
        // for (int i = 0; i < v.size(); i++)
        // {
        //     v[i].resize(i + 1);
        //     for (int j = 0; j <= i;j++)
        //         v[i][j] = i + 1;
        // }
        // for (int i = 0; i < v.size(); i++)
        // {
        //     for (int j = 0; j < v[i].size(); j++)
        //         cout << v[i][j] << " ";
        //     cout << endl;
        // }

        return 0;
}