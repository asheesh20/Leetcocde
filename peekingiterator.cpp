class PeekingIterator : public Iterator {
public:
    vector<int> temp;
    int it = 0;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        for(int i : nums)
            temp.push_back(i);
	}
	int peek() {
            return temp[it];
	}
	int next() {
        int k = temp[it++];
        temp.pop_back();
        return k;
	}
	
	bool hasNext() const {
        if(temp.size())
            return true;
            
    return false;
	}
};