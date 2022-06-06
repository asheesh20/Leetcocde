class Solution {
public:
int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<int>pref=arr;
        for(int i=1;i<n;i++)pref[i]+=pref[i-1];
        
        int sum=0;
        for(int k=1;k<=n;k+=2){  
            
            for(int i=k-1;i<n;i++){
                
                int l=i-k; 
				
                int temp=pref[i];
                
                if(l>=0) temp-=pref[l];
                
                sum+=temp;
                
            }     
        }
        
        return sum;
        
    }
};