class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //unordered_map<key, value>
        unordered_map<int, int> hash;

        vector<int> result;

        // create hash table
        for (int i = 0; i < nums.size(); ++i) {
            hash[nums[i]] = i;
        }

        // search
        for (int i = 0; i < nums.size(); ++i) {
            int t = target - nums[i];
            // hash.count: Count the number of elements present in an unordered_map with a given key
            if (hash.count(t) && hash[t] != i) {
                result.push_back(i);
                result.push_back(hash[t]);
                break;
            }
        }
        return result;
    }
};
