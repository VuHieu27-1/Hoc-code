#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target)
{
    map<int, int> chiso;
    for (int i = 0; i < nums.size(); i++)
    {
        chiso[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if(chiso.find(target - nums[i]) != chiso.end())
        {
            if(i != chiso[target - nums[i]])
            return {i, chiso[target - nums[i]]};
        }
    }
}
int main()
{
    vector<int> dayso = {1,2,3,4};
    vector<int> dapan = twoSum(dayso, 6);
    for(auto x : dapan)
    {
        cout << x << " ";
    }
}