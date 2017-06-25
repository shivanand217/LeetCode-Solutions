// samsung R & D

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

const int mod = 1e9+7;

void swap_(char *x, char *y)
{
	char tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

ll fast_(ll x , ll n)
{
    ll result=1;

    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%mod;
        x=(x*x)%mod;
        n>>=1;
    }

    return result;
}

int main()
{
    int t;
    scanf("%d", &t);

    int x;

    while(t--)
	{
        scanf("%d", &x);
        string p = "";

        int tmp = x;
        int i=1;

        while(i <= 8)
		{
            if((x&1))
				p+='1';
            else
				p+='0';
			x>>=1;
            i++;
		}

        reverse(p.begin(), p.end());
        //cout<<p<<endl;

        i=3;
        int j = p.length() - 1;

        while(i >= 0)
		{
			swap_(&p[i], &p[j]);
            i--;
            j--;
		}
        //cout<<p<<endl;

		i = p.length()-1;
		int mov=0;
		ll ans = 0;

        while(i >= 0)
		{
			if(p[i] == '1')
			ans += fast_(2, mov);
			mov++;
			i--;
		}

        printf("%lld\n", ans);

	}

	return 0;
}
