class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> ran , mag ;
        for(int i=0;i<ransomNote.size();i++){
            ran[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++){
            mag[magazine[i]]++;
        }
        for(auto i : ransomNote){
            if(ran[i]>mag[i]){
                return false;    
            }
        }
        return true;
    }
};