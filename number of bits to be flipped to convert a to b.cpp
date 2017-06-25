#include<bits/stdc++.h>
using namespace std;
int count_set(int n)
{
    int an=0;
	while(n)
	{
        an += (n&1);
        n/=2;
	}
	return an;
}
int main()
{
    int a,b;
    int t;
    scanf("%d",&t);
    while(t--)
	{
        string s="", p="";
        scanf("%d %d", &a, &b);
        int ans= count_set(a^b);
		printf("%d\n", ans);
	}
	return 0;
}
