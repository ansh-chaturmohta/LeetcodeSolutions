class Solution {
public:
    string longestPalindrome(string s) {
        int i=0,j=1;
        int n=s.size();
        int cur=1;
        string str=s.substr(0,1);
        if(n==2){
            if(s[0]==s[1]){
                return s;
            }
            else{
                return s.substr(0,1);
            }
        }
        while(j<n-1){
            // cout<<j<<endl;
            if(s[j-1]==s[j+1]){
                // cout<<s[j-1]<<" "<<s[j]<<" "<<s[j]<<endl;
                int leng=3;
                // str=s.substr(j-1,3);
                int jp=j-2;
                int jn=j+2;
                while(jp>=0 && jn<n && s[jp]==s[jn]){
                    leng+=2;
                    jp--;
                    jn++;
                }
                // cout<<jp<<" "<<jn<<" "<<leng<<" "<<str<<endl;
                if(leng>cur){
                    cur=leng;
                    jp++;
                    jn--;
                    str=s.substr(jp,leng);
                }
                // cout<<str<<endl;
            }    
            if(s[j]==s[j-1]){
                // cout<<s[j-1]<<" "<<s[j]<<endl;
                int leng=2;
                // string nstr=s.substr(j-1,2);
                int jp=j-2;
                int jn=j+1;
                while(jp>=0 && jn<n && s[jp]==s[jn]){
                    leng+=2;
                    jp--;
                    jn++;
                }
                if(leng>cur){
                    cur=leng;
                    jp++;
                    jn--;
                    str=s.substr(jp,leng);
                }
                // cout<<str<<endl;
            }
            if(s[j]==s[j+1]){
                // cout<<s[j]<<" "<<s[j+1]<<endl;
                int leng=2;
                // str=s.substr(j,2);
                int jp=j-1;
                int jn=j+2;
                while(jp>=0 && jn<n && s[jp]==s[jn]){
                    leng+=2;
                    jp--;
                    jn++;
                }
                if(leng>cur){
                    cur=leng;
                    jp++;
                    jn--;
                    str=s.substr(jp,leng);
                }
                // cout<<str<<endl;
            }
            j++;
        }
        return str;
    }
};