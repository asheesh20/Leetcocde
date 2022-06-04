class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true;
        if (s1.size() != s2.size()) return false;
        int L = 0, R = s1.size() - 1;
        while (s1[L] == s2[L]) L++;
        while (s1[R] == s2[R]) R--;
        swap(s2[L], s2[R]);
        return s1 == s2;
    }
};