class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=1;
        for(int i=digits.size()-1;i>=0;i--){
            if(carry==1){
                if(i==0){
                    int cur=digits[0]+1;
                    if(cur>=10){
                        digits[0]=cur%10;
                        carry=1;
                    }
                    else{
                        digits[0]=cur;
                        carry=0;
                    }
                }
                else{
                    int cur=digits[i]+carry;
                    if(cur>=10){
                        carry=1;
                        digits[i]=cur%10;
                    }
                    else{
                        digits[i]=cur;
                        carry=0;
                    }
                }
            }
        }
        if(carry==1){
            reverse(digits.begin(),digits.end());
            digits.push_back(1);
            reverse(digits.begin(),digits.end());
        }
        return digits;
    }
};