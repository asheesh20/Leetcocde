class Solution {
public:
    string convertToBase7(int num) {
     int res=0,j=1,r;
        while(num!=0){
            r=num%7;
            res+=r*j;
            j*=10;
            num/=7;
        }
        return to_string(res);
    }
};