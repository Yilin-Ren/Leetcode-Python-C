class Solution {
private:
    vector<vector<string>> result;
    vector<string> path;
    bool isPalindrome(const string& s, int start, int end){
        for(int i = start,j = end; i<j; i++, j--){
            if(s[i] != s[j]){
                return false;
            }
        }
        return true;
    }

    void backtracking(const string& s, int index){
        if(index >= s.size()){
            result.push_back(path);
            return;
        }
        for(int i = index; i<s.size(); i++){
            if(isPalindrome(s, index, i)){
                string str = s.substr(index, i - index + 1);
                path.push_back(str);
            }
            else{
                continue;
            }
            backtracking(s, i + 1);
            path.pop_back();
        }

    }

public:
    vector<vector<string>> partition(string s) {
        backtracking(s, 0);
        return result;
    }
};
