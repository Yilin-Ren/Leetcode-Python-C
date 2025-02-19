class Solution {
public:
    int getsum(int n){
        int sum = 0;
        while(n){
            sum += (n%10)*(n%10);
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> set;
        while(1){
            int sum = getsum(n);
            if(sum == 1){
                return true;
            }
            // find sum in the set;
            if(set.find(sum) != set.end()){
                return false;
            }
            else{
                set.insert(sum);
            }
            n = sum;
        }
    }
};
