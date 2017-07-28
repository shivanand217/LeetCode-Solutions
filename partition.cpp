// simple sorting O(n*logn)
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        long int sum=0;

        for(int i=0; i<nums.size()-1; i+=2)
        {
            sum += nums[i];
        }

        return sum;
    }
};

// with priority queue runtime reduces to 0.25s
class Solution {

public:
    int arrayPairSum(vector<int>& nums) {
        priority_queue<int> pq;

        long int sum=0;

        for(int i=0; i<nums.size(); i++)
        {
            pq.push(nums[i]);
        }
        int i=0;

        while(!pq.empty())
        {
            if(i%2 == 1)
            {
                sum += pq.top();
            }
            pq.pop();
            i++;
        }

        return sum;
    }
};
