class Solution {
public:
bool hasAllCodes(string s, int k) {
	unordered_set<string> codesDone;
	int n = s.size();
	string curr = s.substr(0, k);
	codesDone.insert(curr);
	int totalNum = (1 << k);
	for(int i = 1; i<n-k+1; i++) {
		if(codesDone.size() == totalNum) break;
		curr = curr.substr(1) + s.substr(i+k-1,1);
		if(codesDone.find(curr) == codesDone.end()) {
			codesDone.insert(curr);
		}
	}
	return codesDone.size() == totalNum;
}
};