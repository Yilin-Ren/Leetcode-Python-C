class Solution {
private:
    const string lettermap[10] = {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz",
    };
public:
    vector<string> result;
    string s;
    void backtracking(const string& digits, int index){
        if(index == digits.size()){
            result.push_back(s);
            return;
        }
        int digit = digits[index] - '0';
        string letters = lettermap[digit];
        for(int i = 0; i<letters.size(); i++){
            s.push_back(letters[i]);
            backtracking(digits, index+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0){
            return result;
        }
        backtracking(digits, 0);
        return result;
    }
};
