class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int>map;
        for(int i=0;i<magazine.size();i++){
            if(map.find(magazine[i]) != map.end()){
                map[magazine[i]]++;
            }else{
                map[magazine[i]]=1;
            }
        }
        for(int i=0;i<ransomNote.size();i++){
            if(map.find(ransomNote[i]) != map.end()){
                map[ransomNote[i]]--;
                if(map[ransomNote[i]]<0){
                    return false;
                }
            } else{
                return false;
            }
        }
        return true;
    }
};
