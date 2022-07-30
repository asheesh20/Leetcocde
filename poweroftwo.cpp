1st Approach :

class Solution {
public:
    bool isPowerOfTwo(int n) {
     if(n==0||n<0) return false;
     if(n==1) return true;
        while(n>1){
            if(n%2==0) n/=2;
            else return false;
        }
        return true;
    }
};

2nd Approach :

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int c=0;
        if(n<=0) return false;
        if(n==1) return true;
        while(n!=0){
            if(n&1) c++;
            n=n>>1;
        }
        if(c==1) return true;
        return false;
    }
};
