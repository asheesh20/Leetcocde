class MyCalendarThree {
public:
    MyCalendarThree() {
        m.emplace(-1, 0);
        maxx = 0;
    }
    
    int book(int start, int end) {
        auto startIt = --m.upper_bound(start);
        startIt = m.emplace(start, startIt->second).first;
        auto endIt = --m.upper_bound(end);
        endIt = m.emplace(end, endIt->second).first;
        for (auto it = startIt; it != endIt; ++it) {
            ++it->second;
            maxx = max(maxx, it->second);
        }
        return maxx;
    }
private:
    int maxx;
    map<int, int> m;
};