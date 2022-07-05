class Solution {
public:
    
    static bool comp(vector<int>a,vector<int>b){
        if(a[1]>b[1]){
            return true;
        }
        return false;
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comp);
        int ans=0;
        for(int i=0;i<boxTypes.size();i++){
            if(boxTypes[i][0]<=truckSize){
                truckSize-=boxTypes[i][0];
                ans+=(boxTypes[i][0]*boxTypes[i][1]);
            }
            else{
                ans+=(truckSize*boxTypes[i][1]);
                break;
            }
        }
        return ans;
    }
};