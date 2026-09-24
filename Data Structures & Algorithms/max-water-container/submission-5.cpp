class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
      
        int s;
        int m = n * (n - 1);
        vector<int> arr(m,0);
        int k = 0;

     for(int i = 0; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
         s = j - i;
         if ( s < 0 ) s = - s;
         int height = min(heights[j],heights[i]);
         if( k < m){
         arr[k] = height * s;
         k++;
         }
          
        }
     }    
        int max_num = 0;
        for(int i = 0 ; i < m ; i++){
            max_num = max(max_num,arr[i]);
        }
        return max_num;
    }
};
