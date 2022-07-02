class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int maxh=0;
        for(int i=1;i<horizontalCuts.size();i++){
            maxh=max(maxh,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        int maxw=0;
        for(int i=1;i<verticalCuts.size();i++){
            maxw=max(maxw,verticalCuts[i]-verticalCuts[i-1]);
        }
        long long int tp = 1000000007;
        return ((maxh%tp)*(maxw%tp))%tp;
    }
};