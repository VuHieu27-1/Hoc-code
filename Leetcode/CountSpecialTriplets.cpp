#include<iostream>
#include<vector>
#include<algorithm>
#include <map>
using namespace std;
void specialTriplets(vector<int>& nums) {
    map<int,int> dem;
    map<int,int> demleft;
    for (int i = 0; i < nums.size(); i++)
    {
        dem[nums[i]]++;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        long long left = demleft[2 * nums[i]];
        long long right = dem[2 * nums[i]] - demleft[2 * nums[i]];
        cout << left << " " << right << endl;
        demleft[nums[i]]++;
    }
}
int main()
{
    vector<int> a = {8, 8, 4, 8 ,4 ,8};
    specialTriplets(a);
}