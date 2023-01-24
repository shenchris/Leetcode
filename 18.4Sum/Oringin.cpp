
class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        if (nums.size()<4) return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < nums.size() - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < nums.size() - 2; j++) {
                if (j > i+1 && nums[j] == nums[j - 1]) continue;
                int left = j + 1;
                int right = nums.size() - 1;
                while (left < right) {
                    if ((long)nums[i] + nums[j] + nums[left] + nums[right] == target) {
                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
                        right--;
                        left++;
                        while (right > 0 && nums[right] == nums[right + 1]) right--;
                        while (left <nums.size() && nums[left] == nums[left - 1]) left++;
                    } else if ((long)nums[i] + nums[j] + nums[left] + nums[right] > target) right--;
                    else left++;
                }
            }
        }
        return result;
    }
};
