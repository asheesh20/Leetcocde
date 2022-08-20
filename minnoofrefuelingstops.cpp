class Solution {
public:

    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int curFuel = startFuel;
        int curPos = 0;
        std::priority_queue<int> skipped;
        int ans = 0;
        if (target <= startFuel) return 0;
        while (curPos < stations.size()) {
            int distanceToNextStop = stations[curPos][0];
            if (curPos-1 >= 0) {
                distanceToNextStop -= stations[curPos-1][0];
            }
            if (curFuel-distanceToNextStop >= 0) {
                curFuel -= distanceToNextStop;
                skipped.push(stations[curPos][1]);
                target = target-distanceToNextStop;
                curPos++;
            } else {
                if (skipped.empty()) {
                    return -1;
                }
                int maxFuel = skipped.top();
                skipped.pop();
                curFuel += maxFuel;
                ans++;
            }
            if (target <= 0) {
                return ans;
            }
        }
        target = target - curFuel;
        while (target > 0) {
            if (skipped.empty()) break;
            int nextFuel = skipped.top();
            skipped.pop();
            target -= nextFuel;
            ans++;
        }
        if (target <=0) {
            return ans;
        }
        else {
            return -1;
        }
    }
};