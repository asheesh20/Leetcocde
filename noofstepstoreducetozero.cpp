class Solution {
public:
    int numberOfSteps(int num) {
        
        int count = 0;
        int k=num;
        if(k == 0)
            return 0;
        while(num > 0){
            k = num;
            num = num&(num-1);
            count++;
        }
        
        return count+log2(k);
    }
};