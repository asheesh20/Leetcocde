class Solution {
public:
    class Compare {

public:
    bool operator() (pair<int,int> l, pair<int,int> r) {
        if (l.second == r.second) return (l.first > r.first);
        return l.second > r.second;
    }

};

int countBits(int n) {

    int res = 0;
    while (n) {
        n = n&(n - 1);
        ++ res;
    }
    return res;

}

vector<int> sortByBits(vector<int>& arr) {

    priority_queue<pair<int,int>, vector<pair<int,int>>, Compare> heap;
    for (int x : arr) {
        heap.push(make_pair(x, countBits(x)));
    }
    vector<int> res;
    while (!heap.empty()) {
        res.push_back(heap.top().first);
        heap.pop();
    }
    return res;

}
};