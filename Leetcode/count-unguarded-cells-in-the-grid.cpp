#include<iostream>
#include<map>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
    vector < vector<int>> mang(m, vector<int>(n, 0)); // khu vuc 
    for(auto g : guards)
    {
        mang[g[0]][g[1]] = 1;
    }
    for(auto w : walls)
    {
        mang[w[0]][w[1]] = 2;
    }
    vector<vector<int>> huong = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
    for(auto x : guards)
    {
        for(auto y : huong)
        {
            int i = x[0] + y[0];
            int j = x[1] + y[1];
            while(i >= 0 && j >= 0 && i < m && j < n)
            {
                if(mang[i][j] == 2 || mang[i][j] == 1)
                {
                    break;
                }
                mang[i][j] = 3;
                i += y[0];
                j += y[1];
            }
        }
    }
    int dem = 0;
    for (int i = 0; i < m; i ++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mang[i][j] << " ";
            if(mang[i][j] == 0)
            {
                dem++;
            }
        }
        cout << endl;
    }
    return dem;
}
int main()
{
    // int m = 4, n = 6;
    // vector<vector<int>> guards = {{ 0, 0 }, { 1, 1 }, {2, 3 }};
    // vector<vector<int>> walls = {{ 0, 1 }, { 2, 2 }, {1, 4 }};
    // int m = 3, n = 3;
    // vector<vector<int>> guards = {{ 1, 1 }};
    // vector<vector<int>> walls = {{ 0, 1}, {1, 0}, {2, 1}, {1, 2}};
    int m = 2, n = 7;
    vector<vector<int>> guards = {{ 1,5 },{ 1,1},{ 1,6 },{ 0,2 }};
    vector<vector<int>> walls = {{ 0,6}, {0,3}, {0,5}};
    cout << countUnguarded(m, n, guards, walls) << endl;
}