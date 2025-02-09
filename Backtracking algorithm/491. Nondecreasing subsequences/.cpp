class Solution {
private:
    vector<vector<int>> result;
    vector<int> path;
    void backtracking(vector<int>& nums, int startIndex){
        if(path.size() >= 2){
            result.push_back(path);
        }
        unordered_set<int> used; // 记录当前层使用的元素，用于去重
        for(int i = startIndex; i<nums.size(); i++){
            if(!path.empty() && nums[i] < path.back()){
                continue;
            }
            if (used.count(nums[i])) {
                continue;
            }
            used.insert(nums[i]);
            path.push_back(nums[i]);
            backtracking(nums, i+1);
            path.pop_back();
        }
    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        backtracking(nums, 0);
        return result;
    }
};
