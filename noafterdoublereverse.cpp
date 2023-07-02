class Solution {
public:
    bool isSameAfterReversals(int num) {
        int s1(0),n=num;
        if(n==0 || n==1) return 1;
        while(n!=0){
            int r=n%10;
            s1=s1*10+r;
            n=n/10;
        }
        int s2(0);
        while(s1!=0){
            int r=s1%10;
            s2=s2*10+r;
            s1/=10;
        }
        if(num==s2) return 1;
        return 0;
    }
};