class Solution {
public:
    int minDeletions(string s) {
        int arr[26]= {0};
        unordered_set<int> set;
        for(int i=0;i<s.length();i++) arr[s[i]-'a']++;
        sort(arr,arr+26);
        int ans=0;
        for(int i=0;i<26;i++) {
            while(arr[i]&&set.find(arr[i])!=set.end()){
                arr[i]--;
                ans++;
            }
            set.insert(arr[i]);
        }
        return ans;
    }
};
