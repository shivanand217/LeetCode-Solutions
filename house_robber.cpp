class Solution {
public:
    int rob(vector<int>& nums) {
        int nums_sz = nums.size();
        switch (nums_sz){
            case 0:
                return 0;
            case 1:
                return nums[0];
            case 2:
                return max(nums[0], nums[1]);
            case 3:
                return max(nums[1], nums[0]+nums[2]);
        }
        int dp[nums.size()];
        
        dp[0] = nums[0];
        dp[1] = nums[1];
        dp[2] = dp[0] + nums[2];
        
        for(int i=3; i<nums.size(); i++){
            dp[i] = max(dp[i-2] + nums[i], dp[i-3] + nums[i]);
        }
        
        return max(dp[nums.size()-1], dp[nums.size()-2]);
    }
};