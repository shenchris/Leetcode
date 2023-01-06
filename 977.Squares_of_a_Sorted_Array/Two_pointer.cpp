class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        int front = 0;
        int end = nums.size()-1;
        for (int i=0;i<nums.size();i++){
            if(abs(nums[front])>=abs(nums[end])){
                result.insert(result.begin(),nums[front]*nums[front]);
                front++;
            } else{
                result.insert(result.begin(),nums[end]*nums[end]);
                end--;
            }
        }
        return result;
    }
};
