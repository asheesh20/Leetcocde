class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> v;
        sort(arr.begin(),arr.end());
        int i=0,c;
        while(i<arr.size()){
            c=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]) c++;
                else break;
            }
            i+=c;
            v.emplace_back(c);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]) return 0;
        }
        return 1;
    }
};