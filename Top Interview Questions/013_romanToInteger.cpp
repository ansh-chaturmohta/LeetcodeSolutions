class Solution {
public:
    int romanToInt(string s) {
        int n=s.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='M' || s[i]=='D' || s[i]=='V' || s[i]=='L'){
                ans+=1000*(s[i]=='M')+500*(s[i]=='D')+5*(s[i]=='V')+50*(s[i]=='L');
            }
            else{
                if(i==n-1){
                    ans+=1*(s[i]=='I')+10*(s[i]=='X')+100*(s[i]=='C');
                }
                else{
                    if(s[i]=='I'){
                        if(s[i+1]=='X' || s[i+1]=='V'){
                            ans+=4*(s[i+1]=='V')+9*(s[i+1]=='X');
                            i++;
                        }
                        else{
                            ans+=1;
                        }
                    }
                    else if(s[i]=='X'){
                        if(s[i+1]=='L' || s[i+1]=='C'){
                            ans+=40*(s[i+1]=='L')+90*(s[i+1]=='C');
                            i++;
                        }
                        else{
                            ans+=10;
                        }
                    }
                    else{
                        if(s[i+1]=='D' || s[i+1]=='M'){
                            ans+=400*(s[i+1]=='D')+900*(s[i+1]=='M');
                            i++;
                        }
                        else{
                            ans+=100;
                        }
                    }
                }
            }
        }
        return ans;
    }
};