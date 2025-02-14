/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */
class ArrayReader;

class Solution {
public:
    int search(const ArrayReader& reader, int target) {
        if(reader.get(0) == target){
            return 0;
        }
        int left = 0, right = 1;
        while(reader.get(right) < target){
            left = right;
            right = right * 2;
        }

        int pivot, num;
        while(left <= right){
            int middle = left + (right - left) / 2;
            num = reader.get(middle);

            if(num == target){
                return middle;
            }
            if(num > target){
                right = middle - 1;
            }
            else left = middle + 1;
        }
        return -1;
    }
};
