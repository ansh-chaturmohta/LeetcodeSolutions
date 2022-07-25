class Solution {
public:
    int ans=0;
    map<int,int>dp;
    
    int poss(string s,int pos){
        if(pos==s.size()){
            return 1;
        }
        if(dp.find(pos)!=dp.end()){
            return dp[pos];
        }
        if(pos!=(s.size()-1)){
            int tp=s[pos]-'0';
            if(tp==0){
                dp[pos]=0;
                return dp[pos];
            }
            tp*=10;
            tp+=(s[pos+1]-'0');
            if(tp<=26){
                dp[pos]=poss(s,pos+2)+poss(s,pos+1);
                return dp[pos];
            }
            else{
                dp[pos]=poss(s,pos+1);
                return dp[pos];
            }
        }
        else{
            int tp=s[pos]-'0';
            if(tp==0){
                return 0;
            }
            dp[pos]=poss(s,pos+1);
            return dp[pos];
        }
    }
    
    int numDecodings(string s) {
        int ans2=poss(s,0);
        return ans2;
    }
};