class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=0;
        int mans=0;
        for(int i=0;i<nums.size();i++){
            ans+=nums[i];
            mans=max(mans,ans);
            if(ans<0){
                ans=0;
            }
        }
        if(mans>0){
            return mans;
        }
        else{
            sort(nums.begin(),nums.end());
            reverse(nums.begin(),nums.end());
            return nums[0];
        }
    }
};