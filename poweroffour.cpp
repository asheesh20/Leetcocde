class Solution {
public:
    bool isPowerOfFour(int n) {
    if(n==1){
        return 1;
    }
    if(n<=0){
        return 0;
    }
    int val=log2(n);
    for(int i=0;i<val;i++){
        int bit=(n&1);
        n/=2;
        if(bit==1){
            return 0;
        }
    }
    
    if(val%2==0){
        return 1;
    }
    return 0;
}
};