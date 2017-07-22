class Solution {
public:
    string convertToBase7(int num) {

        int i=1;
        int sum=0, rem;

        if(num == 0)
        {
            return "0";
        }

		bool neg = false;
        if(num < 0)
        {
            neg = true;
        }
        num = abs(num);

        while(num > 0)
        {
            rem = num%7;
            sum += (rem*i);
            i*=10;
            num/=7;
        }

        string ans = "";
        while(sum > 0)
        {
            ans += (sum%10) + '0';
            sum /= 10;
        }

        reverse(ans.begin(), ans.end());

        string ak = "-";
        if(neg == true)
        {
            ak += ans;
            return ak;
        }

        return ans;
    }
};
