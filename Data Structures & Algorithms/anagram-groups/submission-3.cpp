class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //This is a key map where a string is mapped to group of strings
        
        unordered_map<string,vector<string>> groups;

        for(string s:strs){
        //This is like string is abc, any string like bac ,bca or any other pattern 
        //would be an anagram of abc 
            string label = s;
            sort(label.begin(),label.end());

            //This is like i first find an index for bca string which is abc
            //Then push it
            groups[label].push_back(s);
        }
vector<vector<string>> result;
        for( auto pair:groups){
            result.push_back(pair.second);
        }
        return result;
        }
        
    
};
