#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
#include<set>
using namespace std;
vector<vector<int>> groupAnagrams(vector<int>& strs) {
    map<int, set<vector<int>>> dem;
    set<vector<int>> b;
    vector<int> a;
    for (int i = 0; i < strs.size(); i++)
    {
        for (int j = i; j < strs.size(); j++)
        {
            a.push_back(strs[j]);
            dem[strs[i]].insert(a);
        }
        a = {};
    }

    for (auto x : dem)
    {
        cout << x.first << ": ";
        cout << endl;
        vector<vector<int>> m = vector<vector<int>>(x.second.begin(), x.second.end());
        for (auto z : m)
        {
            for (auto l : z)
            {
                cout << l << " ";
            }
         cout << endl;
        }
    }
}
int main()
{
    vector<int> n = {1, 2, 4, 1, 2, 7};
    groupAnagrams(n);
}
