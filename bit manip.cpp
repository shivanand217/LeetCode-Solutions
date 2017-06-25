#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
	long long a,b, ans;
    scanf("%d", &n);

    while(n--)
	{
        scanf("%lld%lld", &a, &b);
        ans = 0;
        long long diff = a^b;

		diff |= (diff >> 1);
		diff |= (diff >> 2);
		diff |= (diff >> 4);
		diff |= (diff >> 8);
		diff |= (diff >> 16);
		diff |= (diff >> 32);

        long long ans = (a&(~diff));
        printf("%lld\n", ans);
	}

	return 0;

}

