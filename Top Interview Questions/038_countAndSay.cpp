class Solution {
public:
    string countAndSay(int n) {
    string s="11";
    if(n==1){
        return "1";
    }
    s="11";
    if(n==2){
        return "11";
    }
    int count=0;
    string var;    
    for(int i=3;i<=n;i++){
        count=1;
        string t="";
        s=s+'&';
        for(int j=1;j<s.size();j++){
            if(s[j]!=s[j-1]){
                t=t+to_string(count);
                t=t+s[j-1];
                count=1;
            }
            else{
                count++;
            }
        }
        s=t;
    }
        return s;
    }
};