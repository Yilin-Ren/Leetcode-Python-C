class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int left = 0, right = nums.size();
        int lastnegative = -1, firstpositive = nums.size();
        int length = nums.size();

        while(left<right){
            int middle = left + (right - left) / 2;
            if(nums[middle]<0){
                lastnegative = middle;
                left = middle + 1;
            }
            else{
                right = middle;
            }
        }
        int negative_count = (lastnegative!=-1)?lastnegative+1:0;
        
        left = 0, right = nums.size();
        while(left<right){
            int middle = left + (right - left)/2;
            if(nums[middle]>0){
                firstpositive = middle;
                right = middle;
            }
            else{
                left = middle + 1;
            }
        }
        int positive_count = length - firstpositive;

        return max(negative_count, positive_count);
    }
};
