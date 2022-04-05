class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int left = 0;
        int right = height.size()-1;
        while(left < right){
            int hi = min(height[left], height[right]);
            int we = right - left;
            ans = max(ans, hi*we);
            if(height[left]<height[right]){
                left++;
            }
            else if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
                right--;
            }
        }
        return ans;
    }
};
