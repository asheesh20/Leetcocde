    class Solution {
    public:
        bool isAlienSorted(vector<string>& W, string S) {
            unordered_map<char,int> mp;
            for(int i=0;i<S.length();i++) mp[S[i]]=i;
            for(int i=1;i<W.size();i++){
                int x=min((int)W[i].length(),(int)W[i-1].length()),k=0;
                for(int j=0;j<x;j++){
                    if(mp[W[i][j]]==mp[W[i-1][j]]){
                        k=1;
                        continue;
                    }
                    else if(mp[W[i][j]]>mp[W[i-1][j]]){
                        k=0;
                        break;
                    }
                    else if(mp[W[i][j]]<mp[W[i-1][j]]) return false;
                }
                if(k==1 && W[i-1].length()>W[i].length()) return false; 
            }
            return true;
        }
    };