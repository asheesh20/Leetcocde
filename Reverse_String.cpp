class Solution {
public:
    void reverse_str(vector<char>& s,int len=0) {
         int n = s.size(); 
    if (len == n / 2) 
        return; 
        swap(s[len ], s[n - len - 1]); 
    reverse_str(s, len + 1); 
    }
    void reverseString(vector<char>& s)
{
    reverse_str(s);
}
};