class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==1){
            return n;
        }
        int i=0;
        int j=1;
        map<char,int>sol;
        int maxans=0;
        sol[s[i]]=i;
        while(i<n && j<n){
        	// cout<<i<<" "<<j<<" top"<<endl;
            if(sol.find(s[j])==sol.end() || (sol[s[j]]>=0 && sol[s[j]]<i)){
                maxans=max(maxans,j-i+1);
                sol[s[j]]=j;
                j++;
            }
            else{
                i=sol[s[j]]+1;
                sol[s[j]]=j;
                maxans=max(maxans,j-i+1);
                j++;
                // cout<<i<<" "<<j<<endl;
            }
        }
        return maxans;
    }
};