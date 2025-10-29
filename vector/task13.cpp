#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> c;
    vector<int> a(n);
    map<vector<int>, vector<int>> dem;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        vector<int> b = {a[i], a[i + 1], a[i + 2]};
        c.push_back(b);
    }
    for (int i = 0; i < c.size(); i++)
    {
        dem[c[i]].push_back(i);
    }
    for(auto x : dem)
    {
        for(auto z : x.first)
        {
            cout << z << " ";
        }
        cout << ":";
        for(auto y : x.second)
        {
            cout << y << " " ;
        }
        cout << endl;
    }
}