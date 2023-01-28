class Solution {
public:
    void getNext(int*next, string pattern){
        int j=0;
        next[0]=0;

        for (int i = 1; i < pattern.size(); ++i) {
            while (j>0 && pattern[i]!=pattern[j]){
                j=next[j-1];
            }
            if (pattern[i]==pattern[j])j++;
            next[i]=j;
        }
    }

    bool repeatedSubstringPattern(string s) {
        int next[s.size()];
        getNext(next,s);

        if(s.size() % (s.size()-next[s.size()-1])==0 and next[s.size()-1]!=0){
            return true;
        }
        return false;
    }
};
