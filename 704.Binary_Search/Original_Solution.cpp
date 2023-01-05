class Solution {
public:
    // array of integers nums which is sorted -> binaray search
    int search(vector<int>& nums, int target) {
        int front,end,mid;
        front=0;
        end=nums.size()-1;
        while (end>=front){
            mid=(front+end)/2;
            if (nums[mid]==target){
                return mid;
            }
            else if (nums[mid]>target){
                end=mid-1;
            }
            else{
                front=mid+1;
            }
        }
        return -1;
    }
};
