class Solution {
public:
    unordered_map<int,int>par,size;
    int find(int x){
        if(par[x]==x){
            return x;
        }
        return par[x]=find(par[x]);
    }
    void merge(int x, int y){
        int sx=find(x);
        int sy=find(y);
        if(sx!=sy){
            if(size[sx]>=size[sy]){
                size[sx]+=size[sy];
                par[sy]=sx;
            }
            else{
                size[sy]+=size[sx];
                par[sx]=sy;
            }
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        unordered_map<int,vector<char>>alpha;
        for(int i=0;s[i];i++){
            size[i]=1;
            par[i]=i;
        }
        for(auto &i:pairs){
            int x=i[0];
            int y=i[1];
            merge(x,y);
        }    
        for(int i=0;s[i];i++){
            alpha[find(i)].push_back(s[i]);          
        }
        for(auto &i:alpha){
            sort(i.second.begin(),i.second.end());   
        }
        string str="";
        unordered_map<int,int>idx;
        for(int i=0;s[i];i++){
            int x=find(i);
            str+=alpha[x][idx[x]];
            idx[x]++;
        }
        return str;   
    }
};
