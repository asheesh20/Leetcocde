class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n = min(word1.size(),word2.size());
        for(int i=0;i<n;i++){
            ans += word1[i];
            ans += word2[i];
        }
        if(word1.size() < word2.size()){
            ans += word2.substr(word1.size(),word2.size()-word1.size());
        }
        else{
            ans += word1.substr(word2.size(),word1.size()-word2.size());
        }
        return ans;
    }
};