class Solution {
public:
    int maxArea(vector<int>& heights) {
        int right = heights.size() - 1;
        int left = 0;
        int max_Area = 0;
        while(left  < right){
            int Area = min(heights[left],heights[right]) * ( right - left);
            max_Area = max(Area,max_Area);
            if(heights[left] < heights[right]){
            left ++;
            }else{
            right --;}

            
        }
        return max_Area;
    }
};
