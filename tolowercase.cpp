class Solution {
public:
    string toLowerCase(string s) {
        for (auto& character : s) 
            if (character >= 'A' && character <= 'Z')
                character += 32;
        return s;
    }
};
