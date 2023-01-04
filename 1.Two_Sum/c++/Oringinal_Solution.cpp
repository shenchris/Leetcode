class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ans1,ans2,c_i,c_j;
        c_i=0;
        for(auto i = nums.begin(); i != nums.end(); ++i) {
            c_j=c_i+1;
            for (auto j=i+1 ; j != nums.end(); ++j) {
                if (*i+*j==target){
                    ans1=c_j;
                    ans2=c_i;
                    break;
                }
                c_j+=1;
            }
            c_i+=1;
        }
        return {ans1,ans2};
    }
};
