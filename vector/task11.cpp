#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<vector<int>> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        vector<int> b = {a[i], a[i + 1], a[i + 2]};
        c.insert(b);
    }
    vector<vector<int>> d = vector<vector<int>>(c.begin(), c.end());
    for(vector<int> x : d)
    {
        for(int y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}