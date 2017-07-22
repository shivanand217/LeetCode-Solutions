class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int kind = 0;

        unordered_map<int,int> un;

        for(int i=0; i<candies.size(); i++)
        {
            if(un[candies[i]] == 0)
            {
                un[candies[i]]++;
                kind++;
            }
        }

        if(kind >= candies.size()/2)
        {
            return (candies.size()/2);
        }
        else
        {
            return kind;
        }
    }
};
