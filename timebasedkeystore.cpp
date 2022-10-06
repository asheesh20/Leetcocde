class TimeMap {
public:
	unordered_map<string,vector<pair<int,string>>> mp;
	TimeMap() {
	}
	void set(string key, string value, int timestamp) {
		mp[key].push_back({timestamp,value});
	}
	string get(string key, int timestamp) {
		if(!mp.count(key)) return "";
		int l=0,r=mp[key].size();
		while(l<r) {
			int m=(l+r)/2;
			if(mp[key][m].first>timestamp) r=m;
			else l=m+1;
		}
		r--;
		if(r<0) return "";
		return mp[key][r].second;
	}
};