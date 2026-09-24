class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        for(int num: nums){
            hash[num]++;
        }

        // Syntax is pq<Type,Container,Comparator>
        //greater<pair<int,int>> ensures that low freq nums are the top so we can remove elements
        // from top when needed
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minHeap;

        for (auto const& [val,freq]:hash){
            minHeap.push({freq,val});
        }

        while (minHeap.size() > k ){
            minHeap.pop();
         }

        vector<int> result;

        while(!minHeap.empty()){
            result.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return result;
    }
};
