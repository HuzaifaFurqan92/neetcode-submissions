class Solution {
public:
    int findMin(vector<int> &nums) {
        int min_num = nums[0];
       for (int i = 0 ; i < nums.size(); i++){
        min_num = min(min_num,nums[i]);
       }
       return min_num;
    }
};
