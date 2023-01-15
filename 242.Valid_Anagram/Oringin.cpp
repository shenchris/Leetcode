class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_a[26]={0};
        int t_a[26]={0};
        for (int i=0;i<s.length();i++){
            int index=s[i]-97;
            s_a[index]+=1;
        }
        for (int i=0;i<t.length();i++){
            int index=t[i]-97;
            t_a[index]+=1;
        }
        for (int i=0;i<26;i++){
            if (s_a[i]!=t_a[i]){
                return false;
            }
        }
        return true;
    }
};
