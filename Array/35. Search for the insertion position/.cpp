class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        int middle;
        while(left < right){
            middle = left + (right - left) / 2;
            if(nums[middle]<target){
                left = middle+1;
            }
            else if(nums[middle]>target){
                right = middle;
            }
            else{
                return middle;
            }
        }
        return right;
    }
};
