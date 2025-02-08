class Solution {
private:
vector<vector<int>> result;
vector<int> path;
int sum = 0;
void backtracking(vector<int>& candidates, int target, int sum, int index){
    if(sum > target){
        return;
    }
    if(sum == target){
        result.push_back(path);
        return;
    }
    for(int i = index; i < candidates.size(); i++){
        if (i > index && candidates[i] == candidates[i - 1]) {
                continue;
        }
        sum += candidates[i];
        path.push_back(candidates[i]);
        backtracking(candidates, target, sum, i+1);
        sum -= candidates[i];
        path.pop_back();
    }
}
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, 0, 0);
        return result;
    }
};
