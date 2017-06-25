#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, x;
    scanf("%d", &t);
    int fir, sec, sum;map<int,int> ma;
    while(t--)
	{bool ans = false;
        ma.clear();
        scanf("%d%d", &n, &x);int a[n];
        for(int i=0; i<n; i++)
		{
            scanf("%d", &a[i]);
            ma[a[i]]++;
		}
        for(int i=0; i<n-1; i++)
		{
			if(ans)break;
            for(int j=i+1; j<n; j++)
			{
                fir = a[i];
                sec = a[j];
                ma[a[i]]--;
                ma[a[j]]--;
				sum = a[i]+a[j];
                if(ma[x - sum] > 0)
					ans = true;
				ma[a[i]]++;
				ma[a[j]]++;
			}
		}
		if(!ans)
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
