class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i = s.size()-1, j = 0; j<s.size()/2; i--, j++){
            swap(s[i], s[j]);
        }
    }
};
