class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0, end = 0;
        int num = nums.size()+1;
        int sum = 0;
        while(end < nums.size()){
            sum += nums[end];
            while(sum >= target){
                sum -= nums[start];
                num = min(num, end - start + 1);
                start++;
            }
            end++;
        }
        if(num < nums.size() + 1){
            return num;
        }
        else{
            return 0;
        }
    }
};
