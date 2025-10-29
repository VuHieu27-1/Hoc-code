#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string, vector<string>> dem;
    for (int i = 0; i < strs.size(); i++)
    {
        string s;
        s = strs[i];
        sort(strs[i].begin(), strs[i].end());
        dem[strs[i]].push_back(s);
    }
    vector<vector<string>> a;
    for(auto x : dem)
    {
         a.push_back(x.second);
    }
    return a;
}
int main()
{
    vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };
    vector<vector<string>> a = groupAnagrams(strs);
    for(auto x : a)
    {
        for (int i = 0; i < x.size(); i++)
        {
            cout << x[i] << " ";
        }
        cout << endl;
    }
}
