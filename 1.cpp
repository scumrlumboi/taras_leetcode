class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == i)
                continue;
                else if (target == nums[j] + nums[i]) {
                return {j, i};
                }
            }
        }

        return {};
    }
};



