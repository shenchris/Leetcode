class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        while (i < s.size() - 1 && s.size()-i>k) {
            for (int j = 0; j <  k / 2; ++j) {
                swap(s[i+j], s[i+k-j-1]);
            }
            i = i +k*2;
        }
        int temp=s.size()%(2*k);
        if (temp<=k){
            for (int j = 0; j < temp/2; ++j) {
                swap(s[s.size()-temp+j],s[s.size()-1-j]);
            }
        }
        return s;
    }
};

