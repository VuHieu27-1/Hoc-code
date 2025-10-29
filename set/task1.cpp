#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> danhsach(vector<int> mang)
{
    set<int> x = set<int>(mang.begin(), mang.end());
    mang = vector<int>(x.begin(), x.end());
    return mang;
}
int main()
{
    int n;
    cin >> n;
    vector<int> m(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    vector<int> dapan = danhsach(m);
    for (int i = dapan.size() - 1; i >= 0; i --)
    {
        cout << dapan[i] << endl;
    }
}