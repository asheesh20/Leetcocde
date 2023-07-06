// Brute Force 
// TC: O(sqrt(n))
class Solution {
public:
    int mySqrt(int x) {
        int ans;
        if(x==0) return 0;
        if(x==1) return 1;
        for(int i=1;i<=x/i;i++){
            if(i<=x/i){
                ans=i;
            }
        }
        return ans;
    }
};

// Binary Search
// TC : O(logN)

class Solution {
public:
    int mySqrt(int x) {
        long long int s=0,e=x;
        long long int m=s+(e-s)/2;
        long long int ans;;
        while(s<=e){
            if(m*m==x) return m;
            else if(m*m>x) e=m-1;
            else {
                ans=m;
                s=m+1;
            }
            m=s+(e-s)/2;
        }
        return ans;
    }
};
