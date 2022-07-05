class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        map<int,int>sol;
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(sol[nums[i]]==0){
                sol[nums[i]]=1;
                arr.push_back(nums[i]);
            }
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        int cnt=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]-1==arr[i-1]){
                cnt++;
            }
            else{
                ans=max(ans,cnt);
                cnt=1;
            }
        }
        ans=max(ans,cnt);
        return ans;
    }
};