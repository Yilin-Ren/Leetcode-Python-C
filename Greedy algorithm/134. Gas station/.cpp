class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int index = 0;
        int sum = 0;
        int oil = 0;
        bool beginning = false;
        for(int i = 0; i<gas.size(); i++){
            if(gas[i] - cost[i] >= 0 && beginning == false){
                beginning = true;
                index = i;
            }
            if(beginning == true){
                oil += gas[i] - cost[i];
            }
            if(oil < 0){
                index = 0;
                oil = 0;
                beginning = false;
            }
            sum = sum + (gas[i] - cost[i]);
        }
        if(sum >= 0){
            return index;
        }
        return -1;
    }
};
