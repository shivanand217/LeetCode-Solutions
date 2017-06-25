#include<bits/stdc++.h>
using namespace std;

long long int binomialCoeff(long long int n, long long int k)
{
    long long int res = 1;
    if (k > n - k)
        k = n - k;
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}

long long int catalan(long long int n)
{
    long long int c = binomialCoeff(2*n, n);
    return c/(n+1);
}

int main()
{
	int t;
	scanf("%d", &t);
	long long int n;

	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",catalan(n));
	}

    return 0;
}
