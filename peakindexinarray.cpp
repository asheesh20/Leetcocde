// Linear Search 
// TC: O(N) 
// SC: O(1)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if((i==0||arr[i]>arr[i-1])&&(i==arr.size()-1||arr[i]>arr[i+1])) 
            return i;
        }
        return 0;
    }
};

// Binary Search
// TC: O(Log N)
// SC: O(1)

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return 0;
        if(arr[0]>arr[1]) return 0;
        if(arr[n-1]>arr[n-2]) return n-1;
        int start=1,end=n-2;
        int mid=start+(end-start)/2;
        while(start<=end){
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) return mid;
            else if(arr[mid]>arr[mid-1]) start=mid+1;
            else end=mid-1;
            mid=start+(end-start)/2;
        }
        return 0;
    }
};
