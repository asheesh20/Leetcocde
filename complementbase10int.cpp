1st Approach :
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

2nd Approach :
class Solution {
public:
    int bitwiseComplement(int n) {
        int res=n,mask=0;
        if(n==0) return 1;
        while(n!=0){
            mask=(mask<<1)|1;
            n=n>>1;;
        }
        int ans=res^mask;
        return ans;
    }
};
