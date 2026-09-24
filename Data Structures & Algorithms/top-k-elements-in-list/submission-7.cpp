class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //First of all find freq of every num in the array
        unordered_map<int,int> counts;
        for(int n: nums){
            counts[n]++;
        }

        //Now push the pair of num and its freq in a vector
        vector<pair<int,int>> freqList;
        for(pair<int,int> p : counts){
            freqList.push_back({p.second,p.first});
        }

sort(freqList.rbegin(),freqList.rend());

        vector<int> result;
        for(int i = 0 ; i < k; i++ ){
            result.push_back(freqList[i].second);
        }

return result;
    }
};
