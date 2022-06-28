class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        vector<int>sol;
        for(int i=0;i<nums1.size();i++){
            sol.push_back(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            sol.push_back(nums2[j]);
        }
        sort(sol.begin(),sol.end());
        int n=sol.size();
        if(n%2==0){
            ans=(sol[n/2]+sol[n/2-1])/2.0;
        }
        else{
            ans=sol[n/2];
        }
        return ans;
    }
};