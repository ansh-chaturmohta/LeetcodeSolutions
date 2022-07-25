class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=0 || nums[i]>n){
                nums[i]=n+1;
            }
        }
        for(int i=0;i<nums.size();i++){
            int id=abs(nums[i])-1;
            if(id>=0 && id<n && nums[id]>0){
                nums[id]=-1*nums[id];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return n+1;
    }
};