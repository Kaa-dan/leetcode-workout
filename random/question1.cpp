#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> Map;
        for (int i = 0; i < nums.size(); i++)
        {
            int balance = target - nums[i];
            if (Map.find(balance) != Map.end())
            {
                return {Map[balance], i};
            }
            Map[nums[i]] = i;
        }
        return {};
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
