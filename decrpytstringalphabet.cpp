class Solution {
public:
    string freqAlphabets(string s) {
        string P="";
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='#'){
                int p=(s[i-2]-'0')*10+s[i-1]-'0';
                P+=p-1+'a';
                i-=2;
            }
            else P+=s[i]-'1'+'a';
        }
        reverse(P.begin(),P.end());
        return P;
    }
};