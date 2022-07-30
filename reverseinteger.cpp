class Solution {
public:
    int reverse(int x) {
        int r,s=0;
        while(x!=0){
            r=x%10;
            if(s<INT_MIN/10||s>INT_MAX/10) return 0;
            s=s*10+r;
            x=x/10;
        }
        return s;
    }
};