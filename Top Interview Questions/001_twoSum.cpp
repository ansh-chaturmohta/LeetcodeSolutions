class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
            int nt=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==nt){
                    vector<int>sol;
                    sol.push_back(i);
                    sol.push_back(j);
                    return sol;
                }
            }
        }
        vector<int>sol;
        sol.push_back(-1);
        sol.push_back(-1);
        return sol;
    }
};