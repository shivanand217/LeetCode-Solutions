#include<bits/stdc++.h>
using namespace std;
int a[102];
int main()
{
	int t,n;
	scanf("%d", &t);
    unordered_map<int,int> ma;
	while(t--)
	{
		ma.clear();bool ans=false;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
		{
            scanf("%d", &a[i]);
		}
        for(int i=0; i<n-1; i++)
		{
            for(int j=i+1; j<n; j++)
			{
                ma[a[i]+a[j]]++;
			}
		}
		for(auto it = ma.begin(); it!=ma.end(); it++)
		{
            if(it->second > 1)
			{
                ans=true;break;
			}
		}
		if(ans == false)
		{
            printf("0\n");
		}
		else
		{
            printf("1\n");
		}
	}
	return 0;
}
