class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums_set(nums1.begin(),nums1.end());
        vector<int> result;
        for (int num : nums2) {
            if (nums_set.find(num) != nums_set.end()) {
                result.push_back(num);
                nums_set.erase(num);
            }
        }
        return result;
    }
};
