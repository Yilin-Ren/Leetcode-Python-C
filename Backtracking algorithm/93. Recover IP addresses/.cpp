class Solution {
private:
    vector<string> result;
    bool isValid(const string& s, int start, int end){
        if(start>end){
            return false;
        }
        if(s[start] == '0' && start != end){
            return false;
        }
        int num = 0;
        for(int i = start; i <= end; i++){
            if(s[i]>'9'||s[i]<'0'){
                return false;
            }
            num = num*10 + (s[i]-'0');
            if(num > 255){
                return false;
            }
        }
        return true;
    }

    void backtracking(string& s, int index, int pointnum){
        if(pointnum == 3){
            if(isValid(s, index, s.size() - 1)){
                result.push_back(s);
            }
            return;
        }
        for(int i = index; i<s.size(); i++){
            if(isValid(s, index, i)){
                s.insert(s.begin()+i+1, '.');
                pointnum++;
                backtracking(s, i+2, pointnum);
                pointnum--;
                s.erase(s.begin()+i+1);
            }
            else break;
        }
    }

public:
    vector<string> restoreIpAddresses(string s) {
        if(s.size()<4 || s.size() >12){
            return result;
        }
        backtracking(s, 0, 0);
        return result;
    }
};
