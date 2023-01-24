class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size()-2;i++){
            int left=i+1;
            int right=nums.size()-1;
            if (i>0&&nums[i]==nums[i-1]){
                continue;
            }

            while (left<right){
                if(nums[i]+nums[left]+nums[right]==0){
                    result.push_back({nums[i],nums[left],nums[right]});
                    right--;
                    left++;
                    while (right>0 && nums[right] == nums[right + 1]) right--;
                    while (left<nums.size()-1 && nums[left] == nums[left - 1]) left++;

                } else if(nums[i]+nums[left]+nums[right]>0){
                    right--;
                } else {
                    left++;
                }
            }
        }
        return result;
    }
;
