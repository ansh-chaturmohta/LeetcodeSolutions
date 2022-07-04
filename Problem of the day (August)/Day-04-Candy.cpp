class Solution {
public:
    int candy(vector<int>& ratings) {
        if(ratings.size()==1){
            return 1;
        }
        if(ratings.size()==2){
            if(ratings[0]==ratings[1]){
                return 2;
            }
            else{
                return 3;
            }
        }
        vector<int>arr(ratings.size(),1);
        // arr.push_back(1);
        for(int i=1;i<ratings.size();i++){
            if(ratings[i]>ratings[i-1]){
                arr[i]=arr[i-1]+1;
            }
        }
        for(int i=ratings.size()-2;i>=0;i--){
            if(ratings[i]>ratings[i+1]){
                arr[i]=max(arr[i],arr[i+1]+1);
            }
        }
        return accumulate(arr.begin(),arr.end(),0);
    }
};