class Solution {

public:

    string reverseWords(string s) {
    string ans = "";

    int j=0;
    int lp, last=0;

    for(int i=0; i<s.length(); i++)
	{
		if((int)s[i] == 32)
		{

		lp = i-1;

    while(lp != last-1)
	{
        ans += s[lp--];
	}

		ans += ' ';
		last=i+1;

		}
	}

    int kp = s.length()-1;
    string las = "";

    while((int)s[kp] != 32)
	{
        las += s[kp--];
	}

    ans += las;
		return ans;
    }
};
