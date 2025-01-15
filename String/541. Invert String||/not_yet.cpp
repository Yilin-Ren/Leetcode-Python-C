class Solution {
public:
    string reverseStr(string s, int k) {
        int length = s.size(); 
        if(s.size()<k){
            for(int i = 0, j = s.size()-1; i<s.size()/2; i++, j--){
                swap(s[i], s[j]);
            }
        }
        else if(s.size()>=k && s.size()<2*k){
            for(int i = 0, j = k-1; i<k/2; i++, j--){
                swap(s[i], s[j]);
            }
        }
        else{
            for(int i = 0, j = k-1; i<k/2; i++, j--){
                swap(s[i], s[j]);
            }
            length -= 2*k;
            if(length<k){
                for(int i = 2*k, j = s.size()-1; i<(2*k + length)/2; i++, j--){
                    swap(s[i], s[j]);
                }
            }
            else if(length>=k && length<2*k){
                for(int i = 2*k, j = 3*k-1; i<(5*k)/2; i++, j--){
                    swap(s[i], s[j]);
                }
            }
        }
        return s;
    }
};
