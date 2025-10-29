#include <iostream>
#include <map>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    map<int, int> dem;
    for (int i = 0; i < nums.size(); i++)
    {
        dem[nums[i]]++;
    }
    for(auto x : dem)
    {
        if(x.second < 2)
        {
            return x.first;
        }
    }
    return 0;
}
int main()
{
    vector<int> nums = {4,1,2,1,2};
    cout << singleNumber(nums);
}