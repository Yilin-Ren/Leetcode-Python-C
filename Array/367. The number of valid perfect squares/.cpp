class Solution {
public:
    bool isPerfectSquare(int num) {
        int left = 0, right = num;
        int result = -1;
        while(left <= right){
            int mid = left + (right - left)/2;
            if((long long)mid*mid>num){
                right = mid-1;
            }
            else if((long long)mid*mid<num){
                left = mid+1;
            }
            else return true;
        }
        return false;
    }
};
