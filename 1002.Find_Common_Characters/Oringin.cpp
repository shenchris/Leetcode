class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int map[26]={0};
        int other_map[26]={0};
        for (int i=0;i<words[0].length();i++){
            map[words[0][i]-'a']++;
       }
        for (int j=1;j<words.size();j++){

            for (int k=0;k<words[j].length();k++){
                other_map[words[j][k]-'a']++;
            }
            for (int d=0;d<26;d++){
                map[d]=min(map[d],other_map[d]);
            }
            memset(other_map, 0, 26 * sizeof(int));

        }
        vector<string> result;
        for (int i = 0; i < 26; i++) {
            while (map[i] != 0) {
                string s(1, i + 'a');
                result.push_back(s);
                map[i]--;
            }
        }
        return result;
    }
};

