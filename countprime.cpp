class Solution {
public:
    int countPrimes(int n) {
        int c=0;
        vector<bool> prime(n+1,1);
        prime[0]=prime[1]=0;
        for(int i=2;i<n;i++){
            if(prime[i])  c++;
            for(int j=2*i;j<n;j+=i){
                prime[j]=0;
            }
        }
        return c;
    }
};

// TC : O(nlog(log n))