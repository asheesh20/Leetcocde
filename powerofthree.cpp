1st Approach :

class Solution {
public:
    bool isPowerOfThree(int n) {
     if(n==0||n<0) return false;
     if(n==1) return true;
        while(n>=2){
            if(n%3==0) n/=3;
            else return false;
        }
        return true;
    }
};

2nd Approach :

class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0;i<sqrt(n);i++){
            if(pow(3,i)==n) return true;
        }
        return false;
    }
};
