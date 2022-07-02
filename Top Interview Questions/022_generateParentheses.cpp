class Solution {
public:
    
    vector<string>arr;
    
    void ret(int op,int cl,string s,int n){
        if(op==n && cl==n){
            arr.push_back(s);
            return;
        }
        if(op>n || cl>n || cl>op){
            return;
        }
        if(op<n){
            ret(op+1,cl,s+'(',n);
            ret(op,cl+1,s+')',n);
        }
        else{
            ret(op,cl+1,s+')',n);
        }
    }
    
    vector<string> generateParenthesis(int n) {
        arr.clear();
        string s="";
        ret(0,0,s,n);
        return arr;
    }
};