class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //It is a hash Table
         unordered_set<int> seen;

         for(int  n: nums){

            //First we check whether the current num is in set or not
            if(seen.count(n))
            return true;
            
            //If not in the set already insert it into set
            seen.insert(n);
         }

         return false;
    }
};