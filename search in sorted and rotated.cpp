// will not work for duplicates

class Solution {
public:

    int get(int lo, int hi, vector<int>& nums,  int target)
    {
        int mid;
        while(lo <= hi)
        {
            mid = lo + (hi - lo)/2;

            if(nums[mid] == target)
                return true;
            if(nums[mid] < target)
                lo = mid+1;
            else
                hi = mid-1;
        }

        return -1;
    }

    bool search(vector<int>& nums, int target) {

        if(nums.size() == 0)
        {
            return false;
        }

        int pivot = -1;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i+1] < nums[i])
            {
                pivot = i+1;
                break;
            }
        }

        if(pivot == -1 || nums.size()==1)
        {
            int ans = get(0, nums.size()-1, nums, target);
            if(ans == -1)
            {
                return false;
            }
            return true;
        }

        if(nums[pivot] == target || nums[0] == target || nums[nums.size()-1] == target)
        {
            return true;
        }

        int ans = get(0, pivot-1, nums, target);

        if(ans != -1)
        {
            return true;
        }

        ans = get(pivot, nums.size()-1, nums, target);
        if(ans != -1)
        {
            return true;
        }

        return false;
    }
};
