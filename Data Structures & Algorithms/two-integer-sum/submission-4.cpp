class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer(2);
        for(int i = 0; i < nums.size() ; i++ ){
            int r = nums[i];
            for(int j = 0 ; j < nums.size() ; j++){
                int p;
                if( i != j){
                 p = nums[j];
                }
                if (p + r == target){
                    return {i,j};
                }

            }
                    }
                    return {};
    }
};
