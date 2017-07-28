#include<bits/stdc++.h>
using namespace std;

int main()
{
		int x = 11;
		int m = 1;

        if(x < 0)
        {
            return false;
        }

        if((x/10) == 0)
        {
            return true;
        }

        if((x%10) == 0)return false;
		int k = x;

        while(k > 0)
        {
            if(m==1)
			{
				m = (k%10);
			}
			else
				m = m*10+ (k%10);

            k/=10;
        }

        cout<<m<<endl;
    return 0;
}
