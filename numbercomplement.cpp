class Solution {
public:
    int findComplement(int num) {
        int m=0,i=num;
        while(num!=0){
            m=(m<<1)|1;
            num=num>>1;
        }
        int res=~i&m;
        return res;
    }
};