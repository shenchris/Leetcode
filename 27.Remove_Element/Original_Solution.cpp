class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0,i=0;
        while (i<nums.size()-k){
            if(nums[i]==val){
                k+=1;
                for(int j=i;j<nums.size()-1;j++){
                    nums[j]=nums[j+1];
                }
                nums[nums.size()-1]=val;
                i-=1;
            }
            i++;
        }
        return nums.size()-k;
    }
};
