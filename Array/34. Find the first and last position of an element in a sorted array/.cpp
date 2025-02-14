class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        int mid;
        vector<int> result = {-1, -1};
        while(left<right){
            mid = left + (right - left) / 2;
            if(nums[mid]>=target){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        if(left < nums.size() && nums[left] == target){
            result.clear();
            result.push_back(left);
        } 

        left = 0, right = nums.size();
        while(left<right){
            mid = left + (right - left) / 2;
            if(nums[mid]<=target){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        if(right > 0 && nums[right - 1] == target) result.push_back(right-1);

        return result;
    }
};
