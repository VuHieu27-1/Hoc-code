#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    map<int, int> dem;
    set<int> d;
    for (int i = 0; i < nums1.size(); i++)
    {
        dem[nums1[i]]++;
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        if(dem[nums2[i]] > 0)
        {
             d.insert(nums2[i]);
        }
    }
    vector<int> f(d.begin(), d.end());
    return f;
}
int main()
{
    vector<int> vector12 = {4, 9, 5};
    vector<int> vector23 = {9,4,9,8,4};
    vector<int> dapan = intersection(vector12, vector23);
    for (auto x : dapan)
    {
        cout << x << " ";
    }
}