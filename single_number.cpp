class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor_val = nums[0];
        for(int i=1; i<nums.size(); i++){
            xor_val = nums[i] ^ xor_val;
        }
        return xor_val;
    }
};