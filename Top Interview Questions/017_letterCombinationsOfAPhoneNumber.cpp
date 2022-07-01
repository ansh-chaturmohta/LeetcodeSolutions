class Solution {
public:
    
    map<char,vector<char> >sol;
    vector<string>ans;
    void bs(){
        sol['2'].push_back('a');
        sol['2'].push_back('b');
        sol['2'].push_back('c');
        sol['3'].push_back('d');
        sol['3'].push_back('e');
        sol['3'].push_back('f');
        sol['4'].push_back('g');
        sol['4'].push_back('h');
        sol['4'].push_back('i');
        sol['5'].push_back('j');
        sol['5'].push_back('k');
        sol['5'].push_back('l');
        sol['6'].push_back('m');
        sol['6'].push_back('n');
        sol['6'].push_back('o');
        sol['7'].push_back('p');
        sol['7'].push_back('q');
        sol['7'].push_back('r');
        sol['7'].push_back('s');
        sol['8'].push_back('t');
        sol['8'].push_back('u');
        sol['8'].push_back('v');
        sol['9'].push_back('w');
        sol['9'].push_back('x');
        sol['9'].push_back('y');
        sol['9'].push_back('z');
    }
    
    void ret(int idx,string ad,string dig){
        if(idx>=dig.size()){
            ans.push_back(ad);
            return;
        }
        for(auto x : sol[dig[idx]]){
            ret(idx+1,ad+x,dig);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        ans.clear();
        bs();
        if(digits.size()==0){
            return ans;
        }
        ret(0,"",digits);
        return ans;
    }
};