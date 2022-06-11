class Solution {
public:
    unordered_map<string,int> mp;
    void help(vector<string> &P,string s,int I){
        if(I==s.length() && mp[s]==0){
            P.push_back(s);
            mp[s]=1;
            return;
        }
        for(int i=I;i<s.length();i++){
            if(s[i]>='a' && s[i]<='z') s[i]=toupper(s[i]);
            else if(s[i]>='A' && s[i]<='Z') s[i]=tolower(s[i]);
            help(P,s,i+1);
            if(s[i]>='a' && s[i]<='z') s[i]=toupper(s[i]);
            else if(s[i]>='A' && s[i]<='Z') s[i]=tolower(s[i]);
            help(P,s,i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> P;
        help(P,s,0);
        return P;
    }
};