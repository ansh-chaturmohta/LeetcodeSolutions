class Solution {
public:
    bool rec(string s,string p,int i,int j){
        if(i==s.length() && j==p.length()) return true;
        if(i==s.length() || j==p.length()) {
            if(j==p.length()) return false;
            if(p[j]=='*') return rec(s,p,i,j+1);
            if(j+1<p.length() && p[j+1]=='*') return rec(s,p,i,j+2);
            return false;
        }
        bool ans = false;
        if(p[j]=='.' || s[i]==p[j]) {
            if(j<p.length() && p[j+1]=='*') ans = ans || rec(s,p,i,j+2);
            return ans || rec(s,p,i+1,j+1);
        }
        if(s[i]!=p[j] && j+1<p.length() && p[j+1]!='*' && p[j]!='*') return false;
        if(s[i]!=p[j] && j+1<p.length() && p[j+1]=='*' && p[j]!='*') return rec(s,p,i,j+2);
        if(p[j]=='*'){
            ans = ans || rec(s,p,i,j+1);
            while(i<s.length() && (p[j-1]=='.' || s[i]==p[j-1])){
                ans = ans || rec(s,p,i+1,j+1);
                i++;
            }
        }
        return ans;  
    }
    bool isMatch(string s, string p) {
        return rec(s,p,0,0);
    }
};