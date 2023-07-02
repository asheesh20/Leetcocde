class Solution {
public:
    int mySqrt(int x) {
        int ans;
        if(x==0) return 0;
        if(x==1) return 1;
        for(int i=1;i<=x/i;i++){
            if(i<=x/i){
                ans=i;
            }
        }
        return ans;
    }
};