class Solution {
public:
    bool isAnagram(string s, string t) {
        int table1[26];
        int table2[26];
        int i = 0;
        int j = 0;
        while(i < 26) {
            table1[i] = 0;
            table2[i] = 0;
            ++i;
        }
        
        for (i = 0; i < s.size(); i++) {
            ++table1[s[i] - 'a'];
        }
        for (j = 0; j < t.size(); j++) {
            ++table2[t[j] - 'a'];
        }
        i = 0;
        while (i < 26) {
            if (table2[i] != table1[i]) {
                return false;
            }
            ++i;
        }
        
        return true;
    }
};