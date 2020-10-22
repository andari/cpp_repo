#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i != nums.size(); i++)
        {
            for (int j = i + 1; j != nums.size(); j++)
            {
                if (nums[i] == target - nums[j])
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    vector<int> tv;
    vector<int> res;
    // int nums = [ 2, 7, 11, 15 ];
    Solution sol;
    tv.push_back(2);
    tv.push_back(7);
    tv.push_back(11);
    tv.push_back(15);

    res = sol.twoSum(tv, 9);

    for (int x : res) {
        cout << x << endl;
    }
}