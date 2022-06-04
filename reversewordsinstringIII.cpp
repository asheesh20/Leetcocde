class Solution {
public:
     string reverseWords(string s) {
        if (s.find(' ') == string::npos) {
            reverse(s.begin(), s.end());
            return s;
        }
        
        string subStr = s.substr(0, s.find(' '));
        reverse(subStr.begin(), subStr.end());
        return subStr + " " + reverseWords(s.substr(s.find(' ') + 1));
    }
};