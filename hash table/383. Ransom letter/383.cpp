class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int result[26] = {0};
        for(int i = 0; i < magazine.size(); i++){
            result[magazine[i] - 'a']++;
        }
        for(int i = 0; i < ransomNote.size(); i++){
            result[ransomNote[i] - 'a']--;
            if(result[ransomNote[i] - 'a'] < 0){
                return false;
            }
        }
        return true;
    }
};
