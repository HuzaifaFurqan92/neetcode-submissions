class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left  = 0;
        int right = 0;
        vector<int> count (128,0);
        int length = 0;

        while( right < s.length()){
            int idx = s[right]; 
            if(count[idx] == 0) {
                right++;
                count[idx] = 1;
                length = max(length,right - left);
            }else{
                
                while(s[left] != s[right] ){
                    int idx_l = s[left];
                    count[idx_l] = 0;
                    left++; 
                }
                left++;
                right++;
            }
            
        }
    return length;
    }
};
