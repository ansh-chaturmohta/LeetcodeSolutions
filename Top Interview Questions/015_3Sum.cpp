class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> >ans;
        if(nums.size()<=2){
            return ans;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(k>j){
                int cur=nums[i]+nums[j]+nums[k];
                if(cur==0){
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    k--;
                    while(k>j && nums[k]==nums[k+1]){
                        k--;
                    }
                }
                else if(cur>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }
        return ans;
    }
};