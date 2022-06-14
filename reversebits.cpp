class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t highest_bit_mask = 1U << 31;   
        uint32_t result = n & highest_bit_mask;
        for (char ii = 0; ii < 31; ++ii) {
            n = n << 1;
            result = result >> 1;
            result |= n & highest_bit_mask;
        }
        return result;
    }
};