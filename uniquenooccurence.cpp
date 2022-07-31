class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> v;
        int i=0;
        while(i<arr.size()){
            int c=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]) c++;
                else {
                    break;
                }
            }
            v.push_back(c);
            i+=c;
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]) return false;
        }
        return true;
    }
};