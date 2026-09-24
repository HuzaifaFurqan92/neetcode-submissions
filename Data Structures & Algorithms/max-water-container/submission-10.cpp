class Solution {
public:
    int maxArea(vector<int>& heights) {
        int right = heights.size() - 1;
        int left  = 0;
        int maxArea = 0;
        while( left <=  right){
            int width = right - left;
            int currheight = min(heights[left],heights[right]);
             maxArea = max(maxArea, width *  currheight); 
            if(heights[left] > heights[right])
            right --;
            else left++;
        }
        return maxArea;
    }
};
