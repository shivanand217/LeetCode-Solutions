// without sorting initial arrays

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int,int> un;

        if(nums1.size() < nums2.size())
		{
            for(int i=0; i<nums1.size(); i++)
			{
					un[nums1[i]]++;
			}
		}
		else
		{
            for(int i=0; i<nums2.size(); i++)
			{
					un[nums2[i]]++;
			}
		}

        vector<int> ans;
        if(nums1.size() > nums2.size())
		{
            for(int i=0; i<nums1.size(); i++)
			{
                if(un[nums1[i]] > 0)
				{
                    ans.push_back(nums1[i]);
                    un[nums1[i]]--;
				}
			}
		}
		else
		{
            for(int i=0; i<nums2.size(); i++)
			{
                if(un[nums2[i]] > 0)
				{
                    ans.push_back(nums2[i]);
                    un[nums2[i]]--;
				}
			}
		}

        sort(ans.begin(), ans.end());
        return ans;
    }
};
