class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
        vector<string> res;
        for(string a : w){
            map<char, char> m1;
            map<char, char> m2;
            if(p.size() != a.size())
                continue;
            for(int i=0; i<p.size(); i++){
                m1[a[i]] = p[i];
                m2[p[i]] = a[i];
            }
            int t =1;
            for(int i=0; i<p.size(); i++){
                if(m1[a[i]] != p[i] || m2[p[i]] != a[i]){
                    t=0;
                    break;
                }
            }
            if(t && m1.size() == m2.size())
                res.push_back(a);
            
        }
        return res;
    }
};