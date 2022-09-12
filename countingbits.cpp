class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            int c=0;
            int num=i;
            while(num!=0){
                c+=num%2;
                num/=2;
            }
            v.emplace_back(c);
        }
        return v;
    }
};