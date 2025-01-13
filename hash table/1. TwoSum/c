class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i = 0; i<nums.size();i++){
            auto aim = map.find(target - nums[i]);
            if(aim != map.end()){
                return {aim->second, i};
            }
            map.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};
