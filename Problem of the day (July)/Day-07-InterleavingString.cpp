class Solution {
public:
    
    int ans=0;
    map<pair<int,int>,bool>sol;
    
    bool chk(string s1,string s2,string s3,int i,int j,int k){
        if(ans==1){
            return true;
        }
        if(sol.find({i,j})!=sol.end()){
            return sol[{i,j}];
        }
        if(i==s1.size() && j==s2.size() && k==s3.size()){
            ans=1;
            sol[{i,j}]=true;
            return sol[{i,j}];
        }
        if(i==s1.size()){
            if(s3[k]==s2[j]){
                sol[{i,j}]=chk(s1,s2,s3,i,j+1,k+1);
                return sol[{i,j}];
            }
            else{
                sol[{i,j}] = false;
                return sol[{i,j}];
            }
        }
        if(j==s2.size()){
            if(s3[k]==s1[i]){
                sol[{i,j}]=chk(s1,s2,s3,i+1,j,k+1);
                return sol[{i,j}];
            }
            else{
                sol[{i,j}] = false;
                return sol[{i,j}];
            }
        }
        if(s1[i]==s3[k] && s2[j]==s3[k]){
            sol[{i,j}] = (chk(s1,s2,s3,i+1,j,k+1) || chk(s1,s2,s3,i,j+1,k+1));
            return sol[{i,j}];
        }
        if(s1[i]==s3[k]){
            sol[{i,j}] = chk(s1,s2,s3,i+1,j,k+1);
            return sol[{i,j}];
        }
        if(s2[j]==s3[k]){
            sol[{i,j}] = chk(s1,s2,s3,i,j+1,k+1);
            return sol[{i,j}];
        }
        sol[{i,j}] = false;
        return sol[{i,j}];
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        ans=0;
        sol.clear();
        return chk(s1,s2,s3,0,0,0);
    }
};