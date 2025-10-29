#include <iostream>
#include<vector>
#include<map>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    map<int, int> dem;
    for (int i = 0; i < nums.size(); i++)
    {
        dem[nums[i]] = 0;
    }
    return dem.size();
}
int main()
{
    vector<int> nums = {1, 1, 2};
    cout << removeDuplicates(nums);
}