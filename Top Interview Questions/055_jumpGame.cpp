class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
	    for(int i=0;i<n;){
		    int curstep=nums[i];
		    if(i+curstep>=n-1){
			    return true;
		    }
		    if(curstep==0){
			    return false;
		    }
		    int j=1;
		    for(j=1;j<=curstep;j++){
			    if(nums[i+j]>curstep-j){
				    break;
			    }
		    }
		    i+=min(j,curstep);
	    }
	    return true;
    }
};