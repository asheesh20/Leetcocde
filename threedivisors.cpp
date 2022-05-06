class Solution {
public:
    bool isThree(int n) {
        int i,c(0);
        for(i=1;i<=n;i++){
            if(n%i==0) c++;
        }
        if(c==3) return true;
        else return false;
    }
};