class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>arr(2,-1);
        int lo=0,hi=nums.size()-1;
        int ans=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<=target){
                if(nums[mid]==target){
                    ans=mid;
                    hi=mid-1;
                }
                else{
                    lo=mid+1;
                }
            }
            else{
                hi=mid-1;
            }
        }
        arr[0]=ans;
        lo=0;
        hi=nums.size()-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<=target){
                if(nums[mid]==target){
                    ans=mid;
                }
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        arr[1]=ans;
        return arr;
    }
};