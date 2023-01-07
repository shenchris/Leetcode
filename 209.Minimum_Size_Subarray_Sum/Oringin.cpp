class Solution {
public:
    int minSubArrayLen(int target, vector<int> &nums) {
        int front = 0, end = 0;
        queue<int> subArray;
        int sum = 0;
        int minimum = -1;
        while (front <= nums.size() - 1) {
            if (sum >= target) {
                if (minimum == -1 or end - front < minimum) {
                    minimum = end - front;
                }
                sum = sum - subArray.front();
                subArray.pop();
                front++;
            }
            else {
                if (end <= nums.size() - 1) {
                    sum += nums[end];
                    subArray.push(nums[end]);
                    end++;
                } else {
                    if (minimum != -1) {
                        return minimum;
                    } else {
                        return 0;
                    }
                }
            }
        }
        if (minimum != -1) {
            return minimum;
        } else {
            return 0;
        }
    };
};
