#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
vector<int> khoangcach(vector<int> m)
{
    map<int, int> dem;
    map<int, int> dem1;
    vector<int> dapan;
    for (int i = 0; i < m.size(); i++)
    {
        dem[m[i]] = i;
    }
    for (int i = 0; i < m.size(); i++)
    { 
        if(dem1.find(m[i]) == dem1.end())
        {
            dem1[m[i]] = i;
        }
    }
    for (auto x : dem)
    {
        cout << x.first << " " << dem1[x.first] << " " << x.second << endl;
    }
    set<int> a = set<int>(m.begin(), m.end());
    for (int i = 0; i < a.size(); i++)
    {
        if(dem1[m[i]] != dem[m[i]])
        {
            dapan.push_back(dem[m[i]] - dem1[m[i]]);
        }
    }
    return dapan;
}
int main()
{
    vector<int> n = {1, 2, 0, 1, 3, 2, 1};
    vector<int> dapan = khoangcach(n);
    for(auto x : dapan)
    {
        cout << x << " ";
    }
}