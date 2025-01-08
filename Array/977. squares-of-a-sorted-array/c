class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0, right = nums.size()-1, k = nums.size()-1;
        vector<int> result(nums.size(), 0);
        while(left<=right){
            if ((nums[left]*nums[left])<(nums[right]*nums[right])){
                result[k] = nums[right]*nums[right];
                k--;
                right--;
            }
            else{
                result[k] = nums[left] * nums[left];
                k--;
                left++;
            }
        }
        return result;
    }
};
