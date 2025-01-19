class Solution {
public:
    bool isValid(string s) {
        stack<char> s_1;
        if(s.size() % 2 == 1){
            return false;
        }
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                s_1.push(s[i]);
            }
            else{
                if(s[i] == ')'){
                    if(s_1.empty() || s_1.top() != '(') return false;
                    else s_1.pop();
                }

                else if(s[i] == '}'){
                    if(s_1.empty() || s_1.top() != '{') return false;
                    else s_1.pop();
                }
                else if(s[i] == ']'){
                    if(s_1.empty() || s_1.top() != '[') return false;
                    else s_1.pop();
                }
            }
        }
        return s_1.empty();
    }
};
