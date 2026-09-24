class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int max_Area = 0;
        for( int i =  0 ; i  < n - 1 ; i++){
            for(int j  = i + 1; j < n ; j++){
            int Area = min(heights[i],heights[j]) * ( j - i);
            max_Area = max(max_Area,Area);
            }
        }
        return max_Area;
    }
};
