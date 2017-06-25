#include<bits/stdc++.h>
using namespace std;
long long int a[100005];
long long int pre[100005];
int l, r, k;
long long int f(long long int Bit[], int index)
{
    long long int sum = 0;
    index = index+1;
    while(index > 0)
	{
        sum += Bit[index];

		index -= index&(-index);
	}
	return sum;
}
void updateBit(long long int Bit[], int n, int index, int val)
{
    index = index+1;
    while(index <= n)
	{
        Bit[index] += val;
        index += index&(-index);
	}
}
long long int *createBit(int n)
{
    long long int *Bit = new long long int[n+1];
    for(int i=1; i<=n; i++)
	{
        Bit[i]=0;
	}
    for(int i=0; i<n; i++)
	{
        updateBit(Bit, n, i, a[i]);
	}
	return Bit;
}
int main()
{
    int n, q, am;
    scanf("%d%d", &n, &q);
    for(int i=0; i<n; i++)
	{
        scanf("%lld", &a[i]);
        if(i!=0)
			pre[i]=a[i]+pre[i-1]
			else
			pre[i]=a[i];
	}
    int o;
    while(q--)
	{
        scanf("%d",&o);
        if(o==1)
		{
			scanf("%d%d%d", &l, &r, &k);
            long long int cont=0;
            int st;
            if(l-k<0)
				st=0;else st=l-k;
			for(int m=st;m<=r;m++)
			{

			}
		}
		else
		{
			scanf("%d%d", &am, &x);
		}
	}

	return 0;
}
