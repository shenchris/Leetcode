class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> firstTwoNum;
        for (int i=0;i<nums1.size();i++){
            for (int j=0;j<nums1.size();j++){
                if (firstTwoNum.find(nums1[i]+nums2[j]) != firstTwoNum.end()){
                    firstTwoNum[nums1[i]+nums2[j]]+=1;
                } else{
                    firstTwoNum[nums1[i]+nums2[j]]=1;
                }
            }
        }
        int count=0;

        for (int i=0;i<nums3.size();i++){
            for (int j=0;j<nums4.size();j++){
                if (firstTwoNum.find(0-nums3[i]-nums4[j]) != firstTwoNum.end()){
                    count+=firstTwoNum[0-nums3[i]-nums4[j]];
                }
            }
        }
        return count;
    }
};
