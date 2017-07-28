// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0

int guess(int num);

class Solution {
public:
    int guessNumber(int n) {

        int mid;
        int lo = 1;
        int hi = n;

        if(n==1)
        {
            return n;
        }

        while(lo <=hi)
        {
            mid = lo + (hi - lo)/2;

            int k = guess(mid);

            if(k == 0)
            {
                return mid;
            }
            else if(k == -1)
            {
                hi = mid-1;
            }
            else if(k == 1)
            {
                lo = mid+1;
            }
        }

    }
};
