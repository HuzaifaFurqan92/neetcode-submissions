class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int> count(128,0);
    int left = 0, max_len =0; 
    for(int right  = 0; right < s.length(); right++){
        char curr = s[right];
        count[curr]++;

        while(count[curr] >  1){
            count[s[left]]--;
            left++;
        }

        max_len= max(max_len,right - left +1 );
    }

    return max_len;
    }
};
