class Solution {
public:
    bool canJump(vector<int>& nums) {
        int result = 0;
        if (nums.size() == 1) return true;
        for(int i = 0; i<=result; i++){
            result = max(i+nums[i], result);
            if(result >= nums.size()-1) return true;
        }
        return false;
    }
};
