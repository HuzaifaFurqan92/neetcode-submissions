class Solution {
public:
    int characterReplacement(string s, int k) {
       int count[26] = {0};
       int left  = 0 ;
       int result =0;
       int max_Freq = 0;

       for (int right  = 0;  right < s.length() ; right++){
        count[s[right] - 'A']++;
        max_Freq = max(max_Freq,count[s[right] - 'A']);
        int window  =  right  - left + 1;
        if (window - max_Freq > k){
            count[s[left] - 'A']--;
            left++;
        }
        result =  max(result,right - left +1);
       }
    return result;
    }
};
