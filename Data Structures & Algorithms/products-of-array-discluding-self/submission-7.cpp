class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);

        int left_product = 1;
        for(int i = 0; i < n ; i++){
            res[i]=left_product;
            left_product *= nums[i];
        }

        int rightProduct = 1;
        for(int j = n - 1 ; j >= 0;j--  ){
            res[j] = rightProduct * res[j];
            rightProduct *= nums[j]; 
        }
return res;
    }
};
