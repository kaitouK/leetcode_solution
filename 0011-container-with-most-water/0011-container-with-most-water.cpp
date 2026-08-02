class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1,water=0;
        while(left<right){
            int width=right-left;
            water=max(min(height[left],height[right])*width,water);
            height[left]>height[right]?right--:left++;
        }
        return water;
        
    }
};