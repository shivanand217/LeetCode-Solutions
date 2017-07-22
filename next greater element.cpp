class Solution {
	public:
    int ans(vector<int>& nums, int x)
    {
        int i;

        for(i=0; i<nums.size(); i++)
        {
            if(nums[i] == x)
                break;
        }

        if(i == nums.size() || i == nums.size()-1)
            return -1;

        for(; i<nums.size(); i++)
        {
            if(nums[i] > x)
                return nums[i];
        }
        return -1;
    }

    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {

            vector<int> answer(findNums.size());

        for(int i=0; i<findNums.size(); i++)
        {
            answer[i] = ans(nums, findNums[i]);
        }

        return answer;
    }
};
