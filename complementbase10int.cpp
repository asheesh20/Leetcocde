class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int i=n,m(0),res;
        while(n!=0){
            m=(m<<1)|1;
            n=n>>1;
        }
       res=~i & m;
        return res;
    }
};