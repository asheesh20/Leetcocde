//1st Approach : Basic Divison Approach 

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return 0;
        while(n%2==0) {
            n/=2;
        }
        if(n==1) return 1;
        return 0;
    }
};

//2nd Approach : count set bits

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return 0;
        int c(0);
        while(n!=0){
            if(n&1) c++;
            n=n>>1;
        }
        if(c==1) return 1;
        return 0;
        
    }
};

//3rd Approach : Bitwise operation 

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return 0;
        if((n&(n-1))==0) return 1;
        return 0;
        
    }
};
