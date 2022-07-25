#define ll long long
class Solution {
public:
    int mySqrt(int x) {
        ll l=0,r=x;
        while(r>=l){
            ll mid=l+(r-l)/2;
            if(mid*mid<=x){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(l*l>x){
            l--;
        }
        return l;
    }
};