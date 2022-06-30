class Solution {
public:
    int maxArea(vector<int>& height) {
        int n;
        n=height.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            int width_cnt=j-i;
            int height_cnt=min(height[i],height[j]);
            int area=width_cnt*height_cnt;
            ans=max(ans,area);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};