class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s="";
        for(int i=0;i<strs[0].size();i++){
            int cnt=0;
            char cur=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]==cur){
                    cnt++;
                }
            }
            if(cnt==strs.size()){
                s+=cur;
            }
            else{
                break;
            }
        }
        return s;
    }
};