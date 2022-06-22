class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int i=(m+n)-1,size=0;
        int temp[m+n];
        m--;n--;
        double median;
        
        while(i>=0)
        {
            if(m<0)
                temp[i]=nums2[n--];
            else if(n<0)
                temp[i]=nums1[m--];
            else
            {
                if(nums2[n] > nums1[m])
                    temp[i]=nums2[n--];
                else
                    temp[i]=nums1[m--];
            }
            i--;
            size++;
        }
         if(size%2==0)
         {
             size--;
             median=(temp[size/2] + temp[(size/2)+1])/2.0;
         }
         else
         {
             size--;
             median=temp[size/2];
         }
        return median;
    }
};