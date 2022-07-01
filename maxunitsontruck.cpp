class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int, int>> mp;
        for(int i=0;i<boxTypes.size();i++){
            mp.push_back({boxTypes[i][1], boxTypes[i][0]});
        }
        sort(mp.begin(),mp.end(),greater <>());
        int units=0;
        for(int i=0;i<mp.size();i++){
            if(truckSize<mp[i].second){
                units = units + truckSize*mp[i].first;
                return units;
            }else{
                units = units + mp[i].first*mp[i].second;
                truckSize = truckSize - mp[i].second;
            }
        }
        return units;
    }
};