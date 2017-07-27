#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    long long int n,b;
    scanf("%d", &t);

    long long int k1,k2,ans,p1,p2;

    while(t--)
	{
        scanf("%lld %lld", &n, &b);

        k1 = (int)floor(n*1.0/(2*b*1.0));
        k2 = (int)ceil(n*1.0/(2*b*1.0));

        p1 = (n - k1*b)*k1;
        p2 = (n - k2*b)*k2;

        ans = max(p1, p2);

        printf("%lld\n", ans);
	}

	return 0;
}
