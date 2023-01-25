class Solution {
public:
    string reverseWords(string s) {
        string word="";
        vector<string> result;
        for (int i = 0; i < s.size(); ++i) {
            if(s[i]!=' '){
                word+=s[i];
            } else{
                if (word==""){
                    continue;
                }
                result.push_back(word);
                word="";
            }
        }
        if (word!=""){
            result.push_back(word);
        }
        word="";

        for (int i = result.size()-1; i >=0 ; --i) {
            word+=result[i];
            word+=" ";
        }
        word.pop_back();
        return word;
    }
};
