#include<bits/stdc++.h>
using namespace std;
long long int binomialCoeff(long long int n, long long int k)
{
    long long int res = 1;
    if(k > n-k)
		k = n-k;
    for(int i=0; i<k; i++)
	{
        res *= (n-i);
        res /= (i+1);
	}
	return res;
}
long long int catalan(long long int n)
{
    long long int ans = binomialCoeff(2*n, n);
    return ans/(n+1);
}
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int ans = catalan(n);
    printf("%lld\n", ans);
    return 0;
}
