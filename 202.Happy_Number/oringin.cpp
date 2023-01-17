class Solution {
public:
    bool isHappy(int n) {
        int sum;
        unordered_set<int> nums_set;
        while (n!=1){
            sum=0;
            while (n!=0){
                sum=sum+(n%10)*(n%10);
                n=n/10;
            }
            n=sum;
            sum=0;
            if (nums_set.find(n) != nums_set.end()){
                return false;
            } else {
                nums_set.insert(n);
            }
        }
        return true;
    }
};
