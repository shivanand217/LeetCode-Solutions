#include<bits/stdc++.h>
using namespace std;
int a[102];
int b[102];
int main()
{
    int t,n;
    scanf("%d",&t);
    map<int,int> ma;
    while(t--)
	{
		ma.clear();
        scanf("%d", &n);
        for(int i=0; i<n; i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0; i<n; i++)
		{
			scanf("%d",&b[i]);
			ma[b[i]]++;
		}
        for(int i=1; i<=100; i++)
		{
            ma[i]=ma[i]+ma[i-1];
		}
		int ans=0;
        for(int i=0; i<n; i++)
		{
            printf("%d", ma[a[i]]);
            if(i!=n-1)
				printf(",");
		}
		printf("\n");
	}
	return 0;
}
