class Solution {
public:
    void getNext(int* next, const string& s) {
        // init
        int j=0;
        next[0]=0;

        for (int i = 1; i < s.size(); ++i) {
            while (s[j]!=s[i] && j>0) j=next[j-1];
            if (s[j]==s[i]) j++;
            next[i]=j;
        }
    }

    int strStr(string haystack, string needle) {
        // init next array
        int next[needle.size()];
        getNext(next,needle);
        int j=0;
        
        // loop
        for (int i = 0; i < haystack.size(); ++i) {
            while (haystack[i]!=needle[j] && j>0) j=next[j-1];
            if (haystack[i]==needle[j])j++;
            if (j==needle.size()) return i+1-needle.size();
        }
        return -1;
    }
};
