class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        
        int left=0;
        int right=n-1;
        int maxi=0;
        while(left<right){
            int h=min(heights[left],heights[right]);
            int width=right-left;
            maxi=max(maxi,h*width);
            if(heights[left]<heights[right])left++;
            else right--;
            
            
        }
        return maxi;
        
    }
};
